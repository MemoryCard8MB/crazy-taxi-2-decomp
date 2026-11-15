"""Run a script that drives the SDK's Hitachi tools (shc, asmsh, lnk, elf2bin, under wibo): in the dc-tools container (the default),
or natively. Stdlib only.

    import hitachi
    r = hitachi.run(script, env={'TW': ..., 'REL': ...})        # a subprocess.CompletedProcess (text, stdout and stderr captured)

The scripts are written for the container: the SDK at /sdk, the repo at /app (the working directory), the container's own disk at
/work, and Windows paths through wibo's Z:\\ (Z:\\app\\..., Z:\\sdk\\...). The container run mounts them so; the native run maps them
onto the real places, in the script and in the environment it passes, and runs the script with bash in the repo.

Native is opt-in: `DC_NATIVE=1` in the environment or in .env. It needs wibo for the host on PATH, or in the folder DC_WIBO names
(default build/native, where tools/wibo_native.sh puts the pinned macOS build: wibo 1.1.0 runs the 32-bit tools under Rosetta 2).
Crazy Taxi 2 on an M-series Mac, 2026-11-15: one shc 0.43 s against 4.3 s for a docker run, 100 asmsh 4.8 s against 32.6 s in one
container (QEMU x86_64, no Rosetta: wibo needs 32-bit x86, which Rosetta for Linux has not); build.sh from scratch MATCH in 219 s.
The objects differ from the container's only in the compile time the tools write into them, and its checksums.
A native run that fails (a non-zero exit, or a FAIL line the scripts print) runs again in the container, noted in
build/native-fallbacks.log: wibo-macos crashes in shcasm on some big inputs (src/gen_ai.c; 1 of 291 files).
A native run also reads the files the host just wrote: a VM's shared folder (colima's sshfs) served old copies (memory: 13 of 40)."""
import hashlib
import itertools
import os
import re
import shutil
import subprocess
import time
import sys

IMAGE = os.environ.get('DC_TOOLS_IMAGE', 'dc-tools')
_SEQ = itertools.count()


def _dotenv(name):
    """A setting from the environment, else from .env (NAME=value, quotes and `export` allowed), else None."""
    if os.environ.get(name):
        return os.environ[name]
    if os.path.exists('.env'):
        for line in open('.env'):
            m = re.match(r'\s*(?:export\s+)?%s="?([^"\n#]*)"?' % re.escape(name), line)
            if m:
                return m.group(1).strip()
    return None


def native():
    """True when the tools run on this machine instead of in the container (DC_NATIVE=1)."""
    return _dotenv('DC_NATIVE') == '1'


def wibo_dir():
    """The folder whose `wibo` a native run uses (DC_WIBO, default build/native), or None to take wibo from PATH."""
    d = _dotenv('DC_WIBO') or 'build/native'
    d = os.path.abspath(d)
    return d if os.path.exists(os.path.join(d, 'wibo')) else None


def _winpath(p, sep):
    """The host path p as wibo's Windows path (Z:\\ is /), the folders joined by sep (one backslash or two, as the script writes it)."""
    return 'Z:' + sep + sep.join(x for x in os.path.abspath(p).split('/') if x)


def mapper(places):
    """A function that rewrites the container's paths in a text to the host's: places {'sdk': host path, 'app': ..., 'work': ...}.
    /name (POSIX, as a whole path component) and Z:\\name (one or two backslashes, kept as written) both map."""
    names = '|'.join(re.escape(n) for n in sorted(places, key=len, reverse=True))
    posix = re.compile(r'(?<![\w.\-/~$])/(%s)(?=/|["\'\s;:)|&>]|$)' % names)
    win = re.compile(r'Z:(\\+)(%s)(?=\\|["\'\s;:)|&>]|$)' % names)

    def sub(text):
        text = win.sub(lambda m: _winpath(places[m.group(2)], m.group(1)), text)
        return posix.sub(lambda m: os.path.abspath(places[m.group(1)]), text)
    return sub


def alias(target, kind):
    """A path to `target` without a hyphen: a symbolic link ~/.dcnative/<kind><hash of the path>. The Hitachi tools read a hyphen
    inside an argument as the start of an option (asmsh: "(E) INVALID COMMAND PARAMETER" for -object=build\\a-b\\x.obj, while 85
    characters without one pass), and the repo (crazy-taxi-2-decomp) and the SDK (katana-sdks) have hyphens; the container's /app
    and /sdk have none."""
    base = os.path.expanduser(os.path.join('~', '.dcnative'))
    if '-' in base:
        base = '/tmp/dcnative'
    real = os.path.realpath(target)
    link = os.path.join(base, kind + hashlib.sha1(real.encode()).hexdigest()[:8])
    if os.path.realpath(link) != real:
        os.makedirs(base, exist_ok=True)
        tmp = '%s.%d' % (link, os.getpid())
        if os.path.lexists(tmp):
            os.remove(tmp)
        os.symlink(real, tmp)
        os.replace(tmp, link)               # atomic: runs side by side see the old link or the new one, never none
    return link


def run(script, env=None, mount='/app'):
    """Run `script` (bash) with the SDK at /sdk and the working directory at `mount`; env: variables to set. Returns the
    CompletedProcess. The working directory must be the repo (as for the container's -v $PWD:<mount> -w <mount>)."""
    import equiv
    sdk, _rel = equiv.sdk_env()
    env = dict(env or {})
    if not native():
        return _container(script, env, mount, sdk)
    r = _native(script, env, mount, sdk)
    out = r.stdout + r.stderr
    if r.returncode or FAILED.search(out):
        # wibo-macos crashes on some inputs where the Linux build does not: shc's shcasm phase on src/gen_ai.c as one file (deterministic;
        # its first 130 of 133 functions compile, any 131 do not; work/native/ has the case). The container runs the same script; a
        # failure that is in the C itself fails there too, so only the time is lost
        os.makedirs('build', exist_ok=True)
        with open(os.path.join('build', 'native-fallbacks.log'), 'a') as f:
            f.write('%s  exit %d  %s\n' % (time.strftime('%Y-%m-%d %H:%M:%S'), r.returncode,
                                          (FAILED.search(out).group(0) if FAILED.search(out) else out.strip()[-160:] or 'no output').replace('\n', ' | ')))
        return _container(script, env, mount, sdk)
    return r


FAILED = re.compile(r'^(?:ASM )?FAIL(?:ED)? \S+', re.M)     # the tools' scripts name a file that did not build so, and exit 0


def _container(script, env, mount, sdk):
    cmd = ['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':' + mount, '-w', mount]
    for k, v in env.items():
        cmd += ['-e', '%s=%s' % (k, v)]
    return subprocess.run(cmd + [IMAGE, 'bash', '-c', script], stdin=subprocess.DEVNULL, capture_output=True, text=True)


def _native(script, env, mount, sdk):
    app, sdk_ = alias(os.getcwd(), 'app'), alias(sdk, 'sdk')
    work = os.path.join(app, 'build', 'nwork', '%d_%d' % (os.getpid(), next(_SEQ)))     # the container's own disk: fresh per run
    os.makedirs(work)
    try:
        sub = mapper({'sdk': sdk_, mount.strip('/'): app, 'work': work})
        penv = dict(os.environ)
        penv.update({k: sub(v) for k, v in env.items()})
        d = wibo_dir()
        if d:
            penv['PATH'] = d + os.pathsep + penv.get('PATH', '')
        if not shutil.which('wibo', path=penv['PATH']):
            sys.exit('[ERROR] DC_NATIVE=1 but no wibo: run bash tools/wibo_native.sh (macOS), or put wibo on PATH (Linux x86_64)')
        return subprocess.run(['bash', '-c', _files_mapped(sub(script), sub, work)], cwd=os.getcwd(), env=penv,
                              stdin=subprocess.DEVNULL, capture_output=True, text=True)
    finally:
        shutil.rmtree(work, ignore_errors=True)


def _files_mapped(script, sub, work):
    """The script with each `bash <file>.sh` it runs pointed at a copy of that file with the paths mapped too (movecheck, mbuild and
    cbuild write their steps to a file: the first native run of movecheck stopped at `mkdir /work`, read from such a file)."""
    def one(m):
        path = m.group(2)
        if not os.path.isfile(path):
            return m.group(0)
        copy = os.path.join(work, 'script%d_%s' % (next(_SEQ), os.path.basename(path)))
        open(copy, 'w').write(sub(open(path, errors='replace').read()))
        return m.group(1) + copy
    return re.sub(r'(\bbash\s+)([\w./\-]+\.sh)\b', one, script)


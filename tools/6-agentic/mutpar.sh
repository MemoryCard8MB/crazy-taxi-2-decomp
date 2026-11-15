#!/bin/bash
# mutpar.sh <label> <jobs> [mutcases options]: tools/6-agentic/mutcases.py in <jobs> workers, then tools/equiv.py -q on every
# src file they wrote cases for, <jobs> at a time (equiv.py locks its shared files: state/equiv.lock). Run in the repo.
# Logs in work/mut/: <label>.log (the workers' output), <label>.log.prove (each file's verdict), <label>.log.differs (what failed).
#   bash tools/6-agentic/mutpar.sh batch3 10 --max-cov 1.0 --min-gap 5 --time 30
set -u
label=$1; jobs=$2; shift 2
# options before `--`, function names after it (optional): each worker gets the options and only its own share of the names
opts=(); names=()
while [ $# -gt 0 ]; do [ "$1" = "--" ] && { shift; names=("$@"); break; }; opts+=("$1"); shift; done
out=work/mut; mkdir -p "$out/$label.d"
[ -e "$out/$label.targets" ] && { echo "$out/$label.targets exists: pick a new label"; exit 1; }
if [ ${#names[@]} -gt 0 ]; then printf '%s\n' "${names[@]}" > "$out/$label.targets"
else python3 tools/6-agentic/mutcases.py "${opts[@]}" --list > "$out/$label.targets" || exit 1; fi
n=$(wc -l < "$out/$label.targets"); echo "$n targets, $jobs workers  $(date +%T)"
# round-robin over the worst-first list, so each worker gets big and small ones
for k in $(seq 0 $((jobs - 1))); do
  awk -v k=$k -v j=$jobs 'NR % j == k' "$out/$label.targets" > "$out/$label.d/w$k.names"
  [ -s "$out/$label.d/w$k.names" ] || continue
  python3 tools/6-agentic/mutcases.py "${opts[@]}" --write -- $(cat "$out/$label.d/w$k.names") > "$out/$label.d/w$k.log" 2>&1 &
done
wait
cat "$out/$label.d"/w*.log > "$out/$label.log"
echo "mutation done: $(grep -c reached "$out/$label.log") functions  $(date +%T)"
grep -o 'tests/[a-z_0-9]*/' "$out/$label.log" | cut -d/ -f2 | sort -u > "$out/$label.files"
echo "proving $(wc -l < "$out/$label.files") files, $jobs at a time"
xargs -P "$jobs" -I{} sh -c "perl -e 'alarm 3600; exec @ARGV' python3 tools/equiv.py -q src/{}.c > $out/$label.d/{}.prove 2>&1" < "$out/$label.files"
for s in $(cat "$out/$label.files"); do echo "== $s"; tail -4 "$out/$label.d/$s.prove"; done > "$out/$label.log.prove"
grep -B1 "DIFFERS  \|DIFFERS    \|ERROR" "$out/$label.log.prove" | grep -v "^--" > "$out/$label.log.differs"
echo "proofs done  $(date +%T)"; grep "EQUIVALENT, " "$out/$label.log.prove" | awk '{e+=$1; d+=$3} END {print e" equivalent, "d" differ"}'
cat "$out/$label.log.differs"

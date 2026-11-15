#!/usr/bin/env bash
# Fetch wibo for running the Hitachi tools natively (DC_NATIVE=1, tools/hitachi.py): the macOS build of the same release the dc-tools
# image pins (tools/tools-image/Dockerfile), checksum-verified, to build/native/wibo. x86_64; on Apple Silicon it runs under Rosetta 2.
#   bash tools/wibo_native.sh            then put DC_NATIVE=1 in .env
# On Linux x86_64 any wibo on PATH serves (the image's own: wibo-x86_64 of the same release).
set -euo pipefail
cd "$(dirname "$0")/.."
URL=https://github.com/decompals/wibo/releases/download/1.1.0/wibo-macos
SHA256=79d07d267f8410f6509addec3e19ccf79417ac29cfaf5f431bbcc8700a877fef
[ "$(uname -s)" = Darwin ] || { echo "[ERROR] this fetches the macOS build; on Linux x86_64 put wibo-x86_64 (same release) on PATH"; exit 1; }
if [ "$(uname -m)" = arm64 ] && ! /usr/bin/pgrep -q oahd; then
  echo "[ERROR] Rosetta 2 is not installed: softwareupdate --install-rosetta"; exit 1
fi
mkdir -p build/native
curl -fsSL -o build/native/wibo.part "$URL"
echo "$SHA256  build/native/wibo.part" | shasum -a 256 -c - >/dev/null || { rm -f build/native/wibo.part; echo "[ERROR] checksum mismatch for $URL"; exit 1; }
chmod +x build/native/wibo.part && mv build/native/wibo.part build/native/wibo
echo "build/native/wibo: $(build/native/wibo --version 2>&1 | head -1)"

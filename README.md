# samp_clone

<!-- function-coverage:begin -->
| Binary | Mapped official entries | Official entries | Official entries remaining | Coverage |
|---|---:|---:|---:|---:|
| `samp.dll` | 2,409 | 6,669 | 4,260 | 36.12% |
| `samp-server.exe` | 234 | 3,503 | 3,269 | 6.68% |
| **Combined** | **2,643** | **10,172** | **7,529** | **25.98%** |
<!-- function-coverage:end -->

A C++20 reimplementation of the SA-MP 0.3.DL client and dedicated server. The
coverage table counts unique function-address mappings for each executable,
including source-address entries outside the original reference ranges. Tests,
vendored code, inline or platform-only helpers, lambdas, generated macro bodies,
diagnostic stubs, and game assets are excluded.

Project files live under `src/`, tests under `tests/`, dependencies under
`third_party/`, and developer tools under `tools/`. Reference pseudocode and
assembly guidance are under `docs/asm/pseudocode/`; the local game install is
under `GTA Sa samp_clone/`.

`Official entries remaining` is the address inventory total minus unique mapped
entries. `Unmapped local source bodies` counts C++ functions in `src` without a
unique pointer. The imported VS .NET 2003 client source is the production DLL
path. The C++20 compatibility backend lives under `tests/support/client` for
offline regression tests and is excluded from production coverage. The merged
source groups (legacy client files, `game`, `net`, and `d3dhook`) have no
unmapped bodies. Inline and helper bodies without a standalone native entry
are reported separately.

## Install

The repository does not include the GTA installation. Provide your own local
GTA SA and SA-MP 0.3.DL files under `GTA Sa samp_clone/`; the entire directory
is ignored by Git. Place `samp.dll.official` and `samp-server.exe.official`
there to enable reference-based tests and the binary reader. Built DLL/EXE
outputs, PDBs and `server.cfg` are local too. Start from
`docs/server.cfg.example` when creating a local server configuration.

## Build

Build on Windows with MSVC, the C++ workload, CMake, and the DirectX SDK (June
2010). The client and server are 32-bit x86; the client uses x86 inline assembly.
The standard DirectX SDK location is detected automatically. Set
`SAMP_DXSDK_DIR` when it is installed elsewhere.

```powershell
cmake --preset win32-vs2026
cmake --build --preset win32-vs2026
ctest --preset win32-vs2026
```

Use the `win32-vs2022` preset with Visual Studio 2022. Both presets keep
generated files under `build/`.

On Windows, the build deploys the rebuilt client DLL and server executable to
`GTA Sa samp_clone/` when that installation directory exists. These generated
outputs are ignored by Git. Set `SAMP_CLONE_DIR` to use a different deployment
directory. The client source dependencies and integration details are in
[client source integration](docs/CLIENT_SOURCE_MERGE.md).

## Tests

Run the offline suite with
`ctest --test-dir build -C RelWithDebInfo --output-on-failure`. Tests that
compare behavior with the official client or server are included when the
corresponding local `.official` reference binary is present; these binaries
are ignored by Git.

## Launch

Before first launch, copy `docs/server.cfg.example` to
`GTA Sa samp_clone/server.cfg` and replace `CHANGE_ME` with a private RCON
password. Then run `GTA Sa samp_clone/Play Clone.cmd` from Windows Explorer. It configures the
included launcher, starts the local server hidden when no UDP listener uses port
7802, then opens `samp.exe`. In the launcher, connect to `127.0.0.1:7802`. If a
UDP listener already uses that port, the script leaves it running and does not
start another server.

## Coverage audit

`tools/official_function_count.py` prints coverage separately for `samp.dll`
and `samp-server.exe`, then updates the table above. Run it with `--check` to
return a failure status if a production source body lacks a unique valid
official pointer. The counter needs the packages in
`tools/requirements-function-count.txt`.

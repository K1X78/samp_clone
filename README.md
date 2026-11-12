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
assembly guidance are under `docs/asm/pseudocode/`.

`Official entries remaining` is the address inventory total minus unique mapped
entries. `Unmapped local source bodies` counts C++ functions in `src` without a
unique pointer. The imported VS .NET 2003 client source is the production DLL
path. The C++20 compatibility backend lives under `tests/support/client` for
offline regression tests and is excluded from production coverage. The merged
source groups (legacy client files, `game`, `net`, and `d3dhook`) have no
unmapped bodies. Inline and helper bodies without a standalone native entry
are reported separately.

## Runtime requirements

The repository contains the reimplementation and its tests, not the GTA SA or
SA-MP installation. Provide a compatible local installation to run the client.
Original 0.3.DL reference binaries are optional and enable the binary reader
and reference-based tests. Game files, reference binaries, generated outputs,
and local server configuration are excluded from Git.

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

The presets do not deploy into a game installation. They write the client DLL
to `build/msvc/p0-win32/src/client/RelWithDebInfo/samp.dll` and the server to
`build/msvc/p0-win32/src/server/RelWithDebInfo/samp-server.exe`. Copy the
outputs into your local installation, or set `SAMP_CLONE_DIR` when configuring
to deploy there. Client dependencies and integration details are in
[client source integration](docs/CLIENT_SOURCE_MERGE.md).

## Tests

Run the offline suite with
`ctest --test-dir build -C RelWithDebInfo --output-on-failure`. Tests that
compare behavior with the official client or server are included when the
corresponding local `.official` reference binary is present; these binaries
are ignored by Git.

## Server configuration

`server.cfg` is a local settings file read by `samp-server.exe`. It controls
settings such as the port, gamemode and server name; it is not included in this
repository. Copy `docs/server.cfg.example` into the server's working directory
to create one. The example's `REPLACE_WITH_RANDOM_VALUE` is a placeholder, not
a project credential. RCON means Remote Console and controls remote server
administration. This server refuses its built-in default RCON password, so
replace the placeholder with a private, non-default value and keep the
completed config local.

To run locally, start the built `samp-server.exe` from its configured working
directory, then connect using your installed SA-MP launcher at `127.0.0.1:7802`.

## Coverage audit

`tools/official_function_count.py` prints coverage separately for `samp.dll`
and `samp-server.exe`, then updates the table above. Run it with `--check` to
return a failure status if a production source body lacks a unique valid
official pointer. The counter needs the packages in
`tools/requirements-function-count.txt`.

# Client source integration

The normal Win32 `samp.dll` now links the full client in `src/client/`:
startup, game hooks, rendering, pools, RPC handlers, networking, archives and
custom-model handling. Its static target is `samp_client`. There is no `1tc/`
source bucket or `samp_client_ported` build target.

The earlier portable implementation remains in `samp_client_core`, used by its
existing tests. `SAMP_USE_COMPAT_CLIENT=ON` selects the previous Windows
integration for comparison; the default is the merged client. No verified
source bodies were deleted to make this switch.

## Provenance

Source was transferred from the local reference
`build/reference-source/1therealcloud_samp`, using its `sa-mp.vcproj` (VS .NET 2003, version
7.10). The mirror remains reference material and is not a build input.
Existing copyright and attribution comments are preserved.

The archive reader and its headers are directly under `src/client`. The
provenance inventory retains the original upstream `source/archive/` paths.
The current audit checkpoint and validation results are recorded in the
[client audit handoff](CLIENT_AUDIT_HANDOFF.md).

[client-source-merge.json](client-source-merge.json) records the project hash,
each original and merged C++ file hash, and the build source inventory.
All **87 client C++ files plus 11 DXUT C++ files** in the reference project
are represented in the generated build, with no missing or extra C++ files
in those two targets. The initial parser snapshot detected 2,210 bodies in
the 87 client files. The verified-function count is maintained separately.

The upstream reconstruction and its RVA comments are not substitutes for
verification against the shipped 0.3.DL binary. No imported comments were
automatically converted into `Official:` mappings. The independent mapping
audit currently fails because imported bodies lack reviewed mappings and the
inventory parser has unreviewed inline-assembly diagnostics. The counter remains
the only README meter updater.

## Build compatibility

- MSVC Win32 is required for x86 inline assembly. The client keeps byte packing,
  disabled RTTI, the forced DXUT header, DirectSound 8 and the original release
  optimization settings. Seven files retain their original `/Ob1` override.
- `DXUtil.cpp` and `D3DUtil.cpp` have a separate build target for their original
  ANSI / `windows.h` overrides. Forcing the D3D9 preinclude into `D3DUtil.cpp`
  hides the D3D7 declarations it needs.
- The static CRT is the default across the project to match the client and
  prebuilt Detours library. Configuration flags are no longer cleared across
  the entire client directory; the existing core keeps C++ exception handling.
- `SAMP_DXSDK_DIR` selects the DirectX SDK (June 2010). The standard installation
  path and `DXSDK_DIR` environment variable are supported. The `dxerr9.h` shim
  uses `DxErr.h` and `DxErr.lib` from that SDK.
- The flat ttmath tree is included through its parent `third_party/`, matching
  `#include "ttmath/ttmathuint.h"`.
- RakNet builds its complete 60-source manifest. A partially populated source
  tree is now a configuration error, rather than a partially usable library.
- Curl uses its existing 7.57.0 source manifest, Schannel, Windows SSPI and zlib.
  The missing authentication/TLS headers and sources were restored from the
  upstream 7.57.0 archive. Existing files were preserved, including the local
  `7.57.0-DEV` version header. Archive provenance is recorded under
  `third_party/curl-7.57.0/RESTORED_SOURCE.json`.
- BASS and Detours libraries are explicit link inputs. The two required `.lib`
  files have `.gitignore` exceptions so a future source commit can include them.
  `bass.dll` is copied next to the output and deployed with the client.

The DLL links the entire client archive, so unresolved functions cannot hide
inside an unused archive. The linker map identifies `DllMain`,
`ClientDllMain`, `ClientGameLoop` and the RPC handlers as coming from
`samp_client`, not the previous integration.

## Container ABI correction

The initial size adapter appended four bytes to modern `std::string`. That
matched total pool sizes but misplaced the string buffer consumed by native
byte-offset accesses.

Official `samp.dll` owner `0x100170d0` was inspected with
`tools/read_reference_function.py client 0x100170d0 --asm`. It reads the local
buffer at pool+6 and capacity at pool+0x1a, and remote buffers at info+0x14 and
capacity at info+0x28. As the string members start at pool+2 and info+0x10,
the missing word belongs **before** the modern string storage.

`compat/vc7string.hpp` now supplies an allocator prefix. The adapter preserves
28-byte strings and 16-byte vectors, while keeping the current STL ownership
and allocation behavior. It is a compatibility layer, not a claim to have
recovered the original STL implementation. `client_abi_test` checks actual
buffer, size, capacity and vector pointer offsets, including empty, 15-byte,
16-byte and long strings, growth, clearing and reassignment. Pool/model header
layout assertions are compiled in that test.

## Validation and limits

Initial integration validation on 2026-11-10 used MSVC 19.51, Win32 and
RelWithDebInfo:

- The complete client DLL links successfully.
- The full server/client/test build passes.
- All **23 / 23** CTest cases pass, including the new ABI test.
- The original VC project and generated client C++ source sets match exactly.
- The initial integration preceded the function-by-function audit. Current
  mapping and test results are recorded in the handoff.

Build logs and the official startup/layout disassembly observations are in
ignored `build/work/source-merge-*` files. The validated build directory is
`build/archive/build-msvc/source-merge`. Use the CMake supplied with the
installed Visual Studio 2026, since the older CMake on PATH does not recognize
that generator.

No GTA process or client DLL was launched. These checks establish compilation,
link integration and the tested contracts; they do not establish gameplay parity.
The unused RakNet 4.x download and extraction remain on disk because automated
approval review rejected their deletion. They are not build inputs.

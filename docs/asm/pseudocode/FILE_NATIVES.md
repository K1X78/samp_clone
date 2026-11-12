# File-library starting points

This navigation list follows the addresses in the supplied audit report. It is
not a new behavioral verification. Open each complete generated body, follow its
callees, and check the corresponding assembly before implementing it.

| Audit entry | Address | Complete generated C |
| --- | --- | --- |
| fopen | 0x004055a0 | [004055a0.c](samp-server.exe/functions/004055a0.c) |
| fclose | 0x004056c0 | [004056c0.c](samp-server.exe/functions/004056c0.c) |
| fwrite | 0x004056e0 | [004056e0.c](samp-server.exe/functions/004056e0.c) |
| fread | 0x00405770 | [00405770.c](samp-server.exe/functions/00405770.c) |
| fputchar | 0x00405830 | [00405830.c](samp-server.exe/functions/00405830.c) |
| fgetchar | 0x00405880 | [00405880.c](samp-server.exe/functions/00405880.c) |
| fblockwrite | 0x004058d0 | [004058d0.c](samp-server.exe/functions/004058d0.c) |
| fblockread | 0x00405950 | [00405950.c](samp-server.exe/functions/00405950.c) |
| ftemp | 0x004059d0 | [004059d0.c](samp-server.exe/functions/004059d0.c) |
| fseek | 0x004059e0 | [004059e0.c](samp-server.exe/functions/004059e0.c) |
| fexist | 0x00405a40 | [00405a40.c](samp-server.exe/functions/00405a40.c) |
| fremove | 0x00405ae0 | [00405ae0.c](samp-server.exe/functions/00405ae0.c) |
| flength | 0x00405b80 | [00405b80.c](samp-server.exe/functions/00405b80.c) |

The report leaves these helper identities, return values, or argument conventions
partly unresolved. Their raw addresses remain the reliable lookup keys:

| Address | Question from report | Complete generated C |
| --- | --- | --- |
| 0x00405120 | Cell/UTF-8 writer and its count convention | [00405120.c](samp-server.exe/functions/00405120.c) |
| 0x00405340 | Read helper and parameter order | [00405340.c](samp-server.exe/functions/00405340.c) |
| 0x00403250 | AMX string conversion and parameter order | [00403250.c](samp-server.exe/functions/00403250.c) |
| 0x00404ef0 | Decoder path helper | [00404ef0.c](samp-server.exe/functions/00404ef0.c) |
| 0x004058c0 | Internal branch target inside fgetchar, **not a separate helper** | [00405880.c](samp-server.exe/functions/00405880.c) |
| 0x004a003a | CRT target of ftemp | [004a003a.c](samp-server.exe/functions/004a003a.c) |
| 0x004053d0 | Path resolver and its edge cases | [004053d0.c](samp-server.exe/functions/004053d0.c) |

For the original bytes and incoming references alongside the C:

```powershell
& $python tools/read_reference_function.py server 0x405120 --asm
```

See [README.md](README.md) for interpreter setup, lookup commands, provenance,
coverage, and decompiler limitations.

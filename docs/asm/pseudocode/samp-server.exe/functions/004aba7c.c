/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004aba7c
 * Name: __NMSG_WRITE
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl __NMSG_WRITE(int param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  size_t sVar4;
  size_t sVar5;
  HANDLE hFile;
  int iVar6;
  uint *_Str;
  undefined1 auStackY_14c [4];
  UINT aUStackY_148 [3];
  undefined4 auStackY_13c [2];
  undefined4 uStackY_134;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_110 [65];
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_004ec988)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar6 = uVar2 * 8;
  if (param_1 == (&DAT_004ec988)[uVar2 * 2]) {
    if ((DAT_0051c23c == 1) || ((DAT_0051c23c == 0 && (DAT_004ec1e4 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0x4ec98c));
      lpBuffer = *(LPCVOID *)(iVar6 + 0x4ec98c);
      uStackY_134 = 0x4abbd0;
      hFile = GetStdHandle(0xfffffff4);
      uStackY_134 = 0x4abbd7;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_110,0x104);
      if (DVar3 == 0) {
        FUN_004a68f0(local_110,(uint *)"<program name unknown>");
      }
      _Str = local_110;
      sVar4 = _strlen((char *)_Str);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)_Str);
        _Str = (uint *)(auStackY_14c + sVar4 + 1);
        _strncpy((char *)_Str,"...",3);
      }
      sVar4 = _strlen((char *)_Str);
      sVar5 = _strlen(*(char **)(iVar6 + 0x4ec98c));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)((int)local_110 + iVar1 + -0x10) = "Runtime Error!\n\nProgram: ";
      *(int *)((int)local_110 + iVar1 + -0x14) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)local_110 + iVar1 + -0x18) = 0x4abb7c;
      FUN_004a68f0(*(uint **)((int)local_110 + iVar1 + -0x14),
                   *(uint **)((int)local_110 + iVar1 + -0x10));
      *(uint **)((int)local_110 + iVar1 + -0x18) = _Str;
      *(int *)((int)local_110 + iVar1 + -0x1c) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)local_110 + iVar1 + -0x20) = 0x4abb83;
      FUN_004a6900(*(uint **)((int)local_110 + iVar1 + -0x1c),
                   *(uint **)((int)local_110 + iVar1 + -0x18));
      *(undefined **)((int)local_110 + iVar1 + -0x20) = &DAT_004bb588;
      *(int *)((int)&uStackY_134 + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = 0x4abb8e;
      FUN_004a6900(*(uint **)((int)&uStackY_134 + iVar1),*(uint **)((int)local_110 + iVar1 + -0x20))
      ;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = *(undefined4 *)(iVar6 + 0x4ec98c);
      *(int *)((int)auStackY_13c + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x4abb9a;
      FUN_004a6900(*(uint **)((int)auStackY_13c + iVar1),*(uint **)((int)auStackY_13c + iVar1 + 4));
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x12010;
      *(char **)((int)aUStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(int *)((int)aUStackY_148 + iVar1) = (int)local_110 + iVar1 + -0xc;
      *(undefined4 *)(auStackY_14c + iVar1) = 0x4abbaa;
      ___crtMessageBoxA(*(LPCSTR *)((int)aUStackY_148 + iVar1),
                        *(LPCSTR *)((int)aUStackY_148 + iVar1 + 4),
                        *(UINT *)((int)aUStackY_148 + iVar1 + 8));
    }
  }
  return;
}


/* END FUNCTION 0x004aba7c */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010975c
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
  CHAR *pCVar6;
  CHAR *pCVar7;
  int iVar8;
  char *_Str;
  undefined4 uStackY_14c;
  UINT aUStackY_148 [3];
  undefined1 auStackY_13c [4];
  undefined4 uStackY_138;
  undefined4 uStackY_134;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_110 [260];
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_10156238)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar8 = uVar2 * 8;
  if (param_1 == (&DAT_10156238)[uVar2 * 2]) {
    if ((DAT_102acd98 == 1) || ((DAT_102acd98 == 0 && (DAT_102acd9c == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar8 + 0x1015623c));
      lpBuffer = *(LPCVOID *)(iVar8 + 0x1015623c);
      uStackY_134 = 0x101098b0;
      hFile = GetStdHandle(0xfffffff4);
      uStackY_134 = 0x101098b7;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_110,0x104);
      if (DVar3 == 0) {
        FUN_10103c90();
      }
      _Str = local_110;
      sVar4 = _strlen(_Str);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(_Str);
        _Str = (char *)((int)&uStackY_14c + sVar4 + 1);
        _strncpy(_Str,"...",3);
      }
      sVar4 = _strlen(_Str);
      sVar5 = _strlen(*(char **)(iVar8 + 0x1015623c));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)(local_110 + iVar1 + -0x10) = "Runtime Error!\n\nProgram: ";
      *(CHAR **)(local_110 + iVar1 + -0x14) = local_110 + iVar1 + -0xc;
      pCVar6 = local_110 + iVar1 + -0x18;
      pCVar6[0] = '\\';
      pCVar6[1] = -0x68;
      pCVar6[2] = '\x10';
      pCVar6[3] = '\x10';
      FUN_10103c90();
      *(char **)(local_110 + iVar1 + -0x18) = _Str;
      *(CHAR **)(local_110 + iVar1 + -0x1c) = local_110 + iVar1 + -0xc;
      pCVar7 = local_110 + iVar1 + -0x20;
      pCVar7[0] = 'c';
      pCVar7[1] = -0x68;
      pCVar7[2] = '\x10';
      pCVar7[3] = '\x10';
      FUN_10103ca0();
      *(undefined **)(local_110 + iVar1 + -0x20) = &DAT_101176d0;
      *(CHAR **)((int)&uStackY_134 + iVar1) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)&uStackY_138 + iVar1) = 0x1010986e;
      FUN_10103ca0();
      *(undefined4 *)((int)&uStackY_138 + iVar1) = *(undefined4 *)(iVar8 + 0x1015623c);
      *(CHAR **)(auStackY_13c + iVar1) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x1010987a;
      FUN_10103ca0();
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x12010;
      *(char **)((int)aUStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(CHAR **)((int)aUStackY_148 + iVar1) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)&uStackY_14c + iVar1) = 0x1010988a;
      ___crtMessageBoxA(*(LPCSTR *)((int)aUStackY_148 + iVar1),
                        *(LPCSTR *)((int)aUStackY_148 + iVar1 + 4),
                        *(UINT *)((int)aUStackY_148 + iVar1 + 8));
    }
  }
  return;
}


/* END FUNCTION 0x1010975c */

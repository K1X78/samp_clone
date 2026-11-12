/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418ba0
 * Name: FUN_00418ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00418ba0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  LPSTR _Memory;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  char *unaff_EDI;
  char local_310 [264];
  WCHAR local_208 [260];
  
  if (DAT_004ed564 == 0) {
    bVar1 = FUN_004091c0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      GetTempPathA(0xe6,(LPSTR)local_208);
      _Memory = FUN_004093b0((LPCSTR)local_208);
    }
    else {
      GetTempPathW(0xe6,local_208);
      _Memory = FUN_00409270();
    }
    if (_Memory == (LPSTR)0x0) {
      return 7;
    }
    FUN_004189f0(0xe6,local_310,(undefined **)&DAT_004b23ac);
    _free(_Memory);
  }
  else {
    FUN_004189f0(0xe6,local_310,(undefined **)&DAT_004b23ac);
  }
  uVar2 = FUN_00408380("etilqs_");
  uVar3 = FUN_00408380(local_310);
  if (param_1 <= (int)(uVar2 + 0x11 + uVar3)) {
    return 1;
  }
  uVar2 = FUN_00408380(local_310);
  if (uVar2 != 0) {
    do {
      if (*(char *)(extraout_ECX + -1 + uVar2) != '\\') break;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  local_310[uVar2] = '\0';
  FUN_004189f0(param_1 + -0x11,unaff_EDI,(undefined **)"%s\\etilqs_");
  uVar2 = FUN_00408380(unaff_EDI);
  FUN_00412de0(0xf,unaff_EDI + uVar2);
  iVar4 = 3;
  do {
    uVar3 = uVar2 + 5;
    unaff_EDI[uVar2] =
         s_abcdefghijklmnopqrstuvwxyzABCDEF_004ca308[(uint)(byte)unaff_EDI[uVar2] % 0x3e];
    unaff_EDI[uVar2 + 1] =
         s_abcdefghijklmnopqrstuvwxyzABCDEF_004ca308[(uint)(byte)unaff_EDI[uVar2 + 1] % 0x3e];
    unaff_EDI[uVar2 + 2] =
         s_abcdefghijklmnopqrstuvwxyzABCDEF_004ca308[(uint)(byte)unaff_EDI[uVar2 + 2] % 0x3e];
    unaff_EDI[uVar2 + 3] =
         s_abcdefghijklmnopqrstuvwxyzABCDEF_004ca308[(uint)(byte)unaff_EDI[uVar2 + 3] % 0x3e];
    iVar4 = iVar4 + -1;
    unaff_EDI[uVar2 + 4] =
         s_abcdefghijklmnopqrstuvwxyzABCDEF_004ca308[(uint)(byte)unaff_EDI[uVar2 + 4] % 0x3e];
    uVar2 = uVar3;
  } while (iVar4 != 0);
  unaff_EDI[uVar3] = '\0';
  return 0;
}


/* END FUNCTION 0x00418ba0 */

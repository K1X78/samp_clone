/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1a30
 * Name: FUN_100a1a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a1a30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1002e2b0();
  if (DAT_1018e52c == 0) {
    _DAT_00b7cb5c = 1.0;
    _DAT_00b7cb58 = 1.0;
    _DAT_101546f0 = 3.0;
    DAT_1018e52c = FUN_1002e2b0();
    DAT_1018e530 = DAT_1018e52c;
    return;
  }
  FUN_1009fe50();
  DAT_1018e528 = DAT_1018e528 + 1;
  if (0xfa < iVar1 - DAT_1018e52c) {
    iVar2 = DAT_1018e528 * 4 + -4;
    if (iVar2 < 0x11) {
      _DAT_00b7cb58 = 3.0;
    }
    else {
      _DAT_00b7cb58 = 50.0 / (float)iVar2;
    }
    _DAT_101546f0 = _DAT_00b7cb58 * 3.0;
    _DAT_00b7cb5c = _DAT_00b7cb58;
    _DAT_1018e534 = _DAT_00b7cb58;
    DAT_1018e52c = FUN_1002e2b0();
    DAT_1018e528 = 0;
  }
  iVar2 = FUN_10001010();
  if (iVar2 != 0) {
    FUN_10001010();
    iVar2 = FUN_100ac8f0();
    if (iVar2 != 0) {
      if ((DAT_00ba6794 != '\0') && (*(uint *)(param_1 + 0x5d) < 0x2e)) {
        FUN_1009fed0(iVar1 - DAT_1018e530,*(uint *)(param_1 + 0x5d));
        DAT_1018e530 = FUN_1002e2b0();
        return;
      }
      iVar1 = iVar1 - DAT_1018e530;
      if ((iVar1 != 0) && (iVar1 < 0x16)) {
        Sleep(0x15 - iVar1);
        DAT_1018e530 = FUN_1002e2b0();
        return;
      }
      goto LAB_100a1bb9;
    }
  }
  if (DAT_00ba6794 == '\0') {
    iVar1 = iVar1 - DAT_1018e530;
    if ((iVar1 != 0) && (iVar1 < 0xb)) {
      Sleep(10 - iVar1);
    }
  }
  else {
    iVar1 = iVar1 - DAT_1018e530;
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x5d) != 0)) &&
       (iVar2 = (int)(1000 / (longlong)*(int *)(param_1 + 0x5d)), iVar1 < iVar2)) {
      Sleep((iVar2 - iVar1) - 1);
      DAT_1018e530 = FUN_1002e2b0();
      return;
    }
  }
LAB_100a1bb9:
  DAT_1018e530 = FUN_1002e2b0();
  return;
}


/* END FUNCTION 0x100a1a30 */

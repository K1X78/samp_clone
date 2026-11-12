/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad8a0
 * Name: FUN_100ad8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ad8a0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if ((*(int *)(param_1 + 0x2c1) == 0) || (*(int *)(param_1 + 0x2a4) == 0)) {
    return 0;
  }
  iVar1 = FUN_1009f210();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    iVar1 = FUN_100a70f0();
  }
  else {
    iVar1 = FUN_100a7110(*(char *)(param_1 + 0x2b0));
  }
  FUN_100abc80(0,0);
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    iVar2 = FUN_100ad600();
    if (iVar2 != 0) {
      return 0;
    }
    if (*(short *)(iVar1 + 0x22) != 0) {
      iVar1 = *(int *)(param_1 + 0x2c1);
      if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
        if (iVar1 != 4) {
          return 0;
        }
        FUN_100ace50("smkcig_prtl","GANGS",0x442f0000,0,0,0,0,0xabe);
        return 1;
      }
      iVar1 = FUN_100ad5c0();
      if ((iVar1 == 5) || (iVar1 = FUN_100ad5c0(), iVar1 == 0x16)) {
        pcVar3 = "dnk_stndF_loop";
      }
      else {
        pcVar3 = "dnk_stndM_loop";
      }
      FUN_100ace50(pcVar3,&DAT_1011eae0,0x40800000,0,0,0,0,0xffffffff);
      if ((*(int *)(param_1 + 0x2c1) != 3) &&
         (iVar1 = *(int *)(param_1 + 0x2c9) + 0x4e2, *(int *)(param_1 + 0x2c9) = iVar1,
         50000 < iVar1)) {
        *(undefined4 *)(param_1 + 0x2c9) = 50000;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x100ad8a0 */

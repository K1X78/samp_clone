/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7b00
 * Name: FUN_100b7b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100b7b00(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if ((((*(int *)(param_1 + 0x4c) == 0) ||
       (local_4 = param_1, iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44)), iVar1 == 0)) ||
      (*(int *)(param_1 + 0x4c) == 0)) ||
     (iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c)), iVar1 != 1)) {
    return 0;
  }
  iVar1 = FUN_100b1f10(&DAT_1011f754,param_2);
  if (iVar1 == 0) {
    FUN_100a0780(param_2,2);
    FUN_100a07a0();
    FUN_100b1f10(&DAT_1011f768,param_2);
    iVar1 = 0x14;
    do {
      iVar2 = FUN_100b1f10(&DAT_1011f754,param_2);
      if (iVar2 != 0) break;
      Sleep(1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_100b1f10(&DAT_1011f754,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100b1f10(&DAT_1011f740,*(undefined4 *)(param_1 + 0x44),param_2,&local_4);
  return 1;
}


/* END FUNCTION 0x100b7b00 */

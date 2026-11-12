/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100622c0
 * Name: FUN_100622c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100622c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_10062000(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_10062040(param_1), iVar1 == -1)) {
    uVar2 = (*DAT_1016c350)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_4 == 0) {
LAB_10062322:
    iVar3 = *(int *)(&DAT_1016bf6c + iVar1 * 0x14);
    (&DAT_1016bf64)[iVar1 * 5] = param_2;
  }
  else {
    if (param_4 != 1) {
      if (param_4 != 2) goto LAB_10062336;
      param_2 = *(int *)(&DAT_1016bf68 + iVar1 * 0x14);
      goto LAB_10062322;
    }
    (&DAT_1016bf64)[iVar1 * 5] = (&DAT_1016bf64)[iVar1 * 5] + param_2;
    iVar3 = *(int *)(&DAT_1016bf70 + iVar1 * 0x14);
  }
  *(int *)(&DAT_1016bf70 + iVar1 * 0x14) = iVar3 + param_2;
LAB_10062336:
  return (&DAT_1016bf64)[iVar1 * 5];
}


/* END FUNCTION 0x100622c0 */

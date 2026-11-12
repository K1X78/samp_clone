/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062070
 * Name: FUN_10062070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10062070(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_10062020();
  piVar1 = DAT_102ac9d4;
  if (iVar2 == -1) {
    return 0;
  }
  (&DAT_1016be98)[iVar2] = 1;
  iVar4 = iVar2 * 0x14;
  (&DAT_1016bf60)[iVar2 * 5] = DAT_10140338;
  DAT_10140338 = DAT_10140338 + 2;
  (&DAT_1016bf64)[iVar2 * 5] = 0;
  uVar3 = (**(code **)(*piVar1 + 0x10))(param_1);
  piVar1 = DAT_102ac9d4;
  *(undefined4 *)(&DAT_1016bf68 + iVar4) = uVar3;
  uVar3 = (**(code **)(*piVar1 + 0x14))(param_1);
  *(undefined4 *)(&DAT_1016bf6c + iVar4) = uVar3;
  *(undefined4 *)(&DAT_1016bf70 + iVar4) = uVar3;
  return (&DAT_1016bf60)[iVar2 * 5];
}


/* END FUNCTION 0x10062070 */

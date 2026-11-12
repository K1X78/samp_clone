/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6460
 * Name: FUN_100d6460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6460(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined8 uVar3;
  
  if (*(int *)(unaff_EBX + 0x5c) == 0) {
    *param_1 = -1;
    return 0;
  }
  uVar3 = FUN_100d8500();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = FUN_100ee3f0(DAT_102acd00,DAT_102acd04,*(undefined4 *)(unaff_EBX + 0x5c));
  *(int *)(unaff_EBX + 0x5c) = iVar1;
  if (((int)uVar3 <= *(int *)(iVar1 + 0x10)) &&
     (((int)uVar3 < *(int *)(iVar1 + 0x10) ||
      ((iVar2 <= *(int *)(iVar1 + 0x14) && (iVar2 < *(int *)(iVar1 + 0x14))))))) {
    iVar1 = FUN_100d8520(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),uVar3);
    if (iVar1 < 1) {
      *param_1 = 1;
      return 0;
    }
    *param_1 = iVar1;
    return 0;
  }
  *param_1 = 0;
  return 0;
}


/* END FUNCTION 0x100d6460 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044f70
 * Name: FUN_10044f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10044f70(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x6d5) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) < uVar1) {
    iVar3 = *(int *)(param_1 + 0x18) - uVar1;
  }
  else {
    iVar3 = -uVar1;
  }
  if (*(uint *)(param_1 + 0x14) + iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + -4 + *(int *)(param_1 + 0x18) * 4);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + -4 + *(int *)(param_1 + 0x10) * 4);
    }
    *param_2 = *(undefined4 *)(iVar3 + 0x2f);
    uVar2 = *(undefined4 *)(iVar3 + 0x2b);
    FUN_1002e630(iVar3);
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x10044f70 */

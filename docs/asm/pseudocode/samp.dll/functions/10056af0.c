/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056af0
 * Name: FUN_10056af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10056af0(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_2 == 10) {
    *(undefined1 *)(*(int *)(param_1 + 0x206) + 6 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x206) = 0;
    return 1;
  }
  if (param_2 == 8) {
    iVar1 = *(int *)(param_1 + 0x206);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x206) = iVar1 + -1;
      *(undefined1 *)(iVar1 + 5 + param_1) = 0;
      return 0;
    }
  }
  else if ((0x1f < param_2) && (param_2 < 0x7f)) {
    if (*(uint *)(param_1 + 0x206) < 0x200) {
      *(byte *)(*(uint *)(param_1 + 0x206) + 6 + param_1) = param_2;
      *(int *)(param_1 + 0x206) = *(int *)(param_1 + 0x206) + 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10056af0 */

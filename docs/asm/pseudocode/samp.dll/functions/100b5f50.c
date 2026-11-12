/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5f50
 * Name: FUN_100b5f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b5f50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100a7630(param_1);
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x18);
      param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
      param_2[2] = *(undefined4 *)(iVar1 + 0x20);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b5f50 */

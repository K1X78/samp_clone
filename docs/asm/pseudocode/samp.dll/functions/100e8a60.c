/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8a60
 * Name: FUN_100e8a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e8a60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    while (iVar1 != 0) {
      FUN_100e89e0(param_1,*(undefined4 *)(param_1 + 4),param_2);
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


/* END FUNCTION 0x100e8a60 */

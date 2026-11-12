/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009cab0
 * Name: FUN_1009cab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009cab0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x2f) = 1;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - 2000.0;
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      *(float *)(iVar1 + 0x38) = *(float *)(iVar1 + 0x38) - 2000.0;
    }
  }
  return;
}


/* END FUNCTION 0x1009cab0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f5c0
 * Name: FUN_1009f5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009f5c0(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x40) + 0x40);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  return;
}


/* END FUNCTION 0x1009f5c0 */

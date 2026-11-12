/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f9d0
 * Name: FUN_1001f9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001f9d0(uint *param_1)

{
  FUN_1001f630(1);
  if ((*param_1 & 7) == 0) {
    *(undefined1 *)(((int)*param_1 >> 3) + param_1[3]) = 0;
  }
  *param_1 = *param_1 + 1;
  return;
}


/* END FUNCTION 0x1001f9d0 */

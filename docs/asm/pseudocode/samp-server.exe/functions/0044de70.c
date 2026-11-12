/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044de70
 * Name: FUN_0044de70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044de70(uint *param_1)

{
  FUN_0044dc30(param_1,1);
  if ((*param_1 & 7) == 0) {
    *(undefined1 *)(((int)*param_1 >> 3) + param_1[3]) = 0;
  }
  *param_1 = *param_1 + 1;
  return;
}


/* END FUNCTION 0x0044de70 */

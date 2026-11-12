/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a600
 * Name: FUN_0041a600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041a600(int *param_1)

{
  int *in_EAX;
  
  if ((in_EAX != (int *)0x0) && (*(int *)(*param_1 + 0x50) < *in_EAX)) {
    FUN_00418b00((undefined **)"too many columns in %s");
  }
  return;
}


/* END FUNCTION 0x0041a600 */

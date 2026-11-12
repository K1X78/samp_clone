/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a730
 * Name: FUN_0041a730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041a730(void *param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  int local_4;
  
  puVar1 = FUN_00416620(param_1,0x18,3,(int *)(unaff_ESI + 0x14),(int *)(unaff_ESI + 0x18),&local_4)
  ;
  *(undefined4 **)(unaff_ESI + 0x10) = puVar1;
  return local_4;
}


/* END FUNCTION 0x0041a730 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d360
 * Name: FUN_0040d360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040d360(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  
  FUN_0040d250((int)unaff_ESI);
  *unaff_ESI = param_1;
  unaff_ESI[1] = param_2;
  *(undefined2 *)(unaff_ESI + 7) = 4;
  *(undefined1 *)((int)unaff_ESI + 0x1e) = 1;
  return;
}


/* END FUNCTION 0x0040d360 */

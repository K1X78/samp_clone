/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a89a0
 * Name: FUN_004a89a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1  [10] FUN_004a89a0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}


/* END FUNCTION 0x004a89a0 */

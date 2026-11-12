/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410820
 * Name: FUN_00410820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __cdecl FUN_00410820(double param_1)

{
  double dVar1;
  float10 fVar2;
  
  fVar2 = (float10)1.0;
  dVar1 = 10.0;
  if (10.0 < param_1) {
    do {
      fVar2 = fVar2 + (float10)1.0;
      dVar1 = dVar1 * 10.0;
    } while (dVar1 < param_1);
  }
  return fVar2;
}


/* END FUNCTION 0x00410820 */

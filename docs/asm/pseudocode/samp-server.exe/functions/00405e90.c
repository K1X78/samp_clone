/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405e90
 * Name: FUN_00405e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __cdecl FUN_00405e90(float param_1)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (in_EAX == 1) {
    fVar1 = fVar1 * (float10)0.017453292519943295;
  }
  else if (in_EAX == 2) {
    return fVar1 * (float10)0.015707963267948967;
  }
  return fVar1;
}


/* END FUNCTION 0x00405e90 */

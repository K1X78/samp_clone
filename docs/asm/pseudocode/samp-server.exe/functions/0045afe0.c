/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045afe0
 * Name: FUN_0045afe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_0045afe0(void)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = FUN_0045af90();
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + (float10)4294967296.0;
  }
  return fVar2 * (float10)2.3283064365386963e-10;
}


/* END FUNCTION 0x0045afe0 */

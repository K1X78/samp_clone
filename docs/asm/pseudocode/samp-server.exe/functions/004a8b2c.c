/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a8b2c
 * Name: __d_inttype
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if ((double)fVar2 == param_1) {
      fVar2 = __frnd(param_1 / 2.0);
      if ((float10)(param_1 / 2.0) == fVar2) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004a8b2c */

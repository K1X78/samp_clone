/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010727c
 * Name: __d_inttype
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if ((double)fVar2 == param_1) {
      param_1 = param_1 / 2.0;
      fVar2 = (float10)__frnd();
      if ((float10)param_1 == fVar2) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1010727c */

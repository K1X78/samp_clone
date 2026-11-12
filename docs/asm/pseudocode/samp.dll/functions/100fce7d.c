/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fce7d
 * Name: FUN_100fce7d
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100fce7d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_101560e0, param_1 != 0)) {
      fVar1 = (float10)FUN_1010711c();
    }
LAB_100fcf0c:
    if (DAT_102acd38 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10107105();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_101560e0;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100fcf0c;
      fVar1 = _DAT_101560ea;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_101560ea;
      }
    }
    if (DAT_102acd38 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}


/* END FUNCTION 0x100fce7d */

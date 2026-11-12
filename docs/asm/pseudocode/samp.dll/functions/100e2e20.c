/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2e20
 * Name: FUN_100e2e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e2e20(uint param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 100000)) {
      FUN_100cc780();
      return;
    }
    if (param_2 < 1) {
      if ((param_2 < 0) || (param_1 < 0x9c4000)) {
        __alldiv(param_1,param_2,0x400,0);
        FUN_100cc780();
        return;
      }
      if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x6400000)))) {
        uVar1 = __allrem(param_1,param_2,0x100000,0);
        __alldiv(uVar1,0x19999,0);
        __alldiv(param_1,param_2,0x100000,0);
        FUN_100cc780();
        return;
      }
    }
  }
  if ((param_2 < 3) && ((param_2 < 2 || (param_1 < 0x71000000)))) {
    __alldiv(param_1,param_2,0x100000,0);
    FUN_100cc780();
    return;
  }
  if ((param_2 < 0x1a) && (param_2 < 0x19)) {
    uVar1 = __allrem(param_1,param_2,0x40000000,0);
    __alldiv(uVar1,0x6666666,0);
    __alldiv(param_1,param_2,0x40000000,0);
    FUN_100cc780();
    return;
  }
  if ((param_2 < 0x9c5) && (param_2 < 0x9c4)) {
    __alldiv(param_1,param_2,0x40000000,0);
    FUN_100cc780();
    return;
  }
  if ((param_2 < 0x271001) && (param_2 < 0x271000)) {
    __alldiv(param_1,param_2,0,0x100);
    FUN_100cc780();
    return;
  }
  __alldiv(param_1,param_2,0,0x40000);
  FUN_100cc780();
  return;
}


/* END FUNCTION 0x100e2e20 */

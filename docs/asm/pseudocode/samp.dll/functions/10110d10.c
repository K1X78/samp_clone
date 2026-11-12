/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110d10
 * Name: FUN_10110d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10110d10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 5) {
    uVar1 = 0;
  }
  else {
    param_1 = FUN_10110d70(param_1,param_2,0);
    for (param_3 = param_3 + -5; 0 < param_3; param_3 = param_3 + -1) {
      param_1 = FUN_10110db0(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* END FUNCTION 0x10110d10 */

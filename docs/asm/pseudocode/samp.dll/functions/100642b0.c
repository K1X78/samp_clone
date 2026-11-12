/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100642b0
 * Name: FUN_100642b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_100642b0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  if (param_2 != uVar1) {
    while( true ) {
      if (param_2 < uVar1) {
        param_1 = (undefined4 *)param_1[1];
      }
      else {
        param_1 = (undefined4 *)param_1[2];
      }
      if (param_1 == (undefined4 *)0x0) break;
      uVar1 = *(uint *)*param_1;
      if (param_2 == uVar1) {
        return param_1;
      }
    }
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}


/* END FUNCTION 0x100642b0 */

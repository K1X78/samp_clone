/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048aab0
 * Name: FUN_0048aab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0048aab0(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x3fffffff) != param_1) {
    return 0;
  }
  uVar1 = (*(code *)*param_2)(param_2,param_1 * 4);
  return uVar1;
}


/* END FUNCTION 0x0048aab0 */

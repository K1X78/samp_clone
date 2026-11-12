/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b24f0
 * Name: FUN_100b24f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_100b24f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_100b2180();
  *param_1 = &PTR_FUN_1011f4c0;
  param_1[2] = 0;
  FUN_100b21b0(0x5c);
  (*(code *)0x621190)(param_6,param_5,param_3,param_4,param_2);
  return param_1;
}


/* END FUNCTION 0x100b24f0 */

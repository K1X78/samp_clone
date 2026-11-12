/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af330
 * Name: FUN_100af330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100af330(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x2cd);
  if (*(int *)(param_1 + 0x2cd) != 0) {
    FUN_100b1f10(&DAT_1011eef0,*(int *)(param_1 + 0x2cd));
    *puVar1 = 0;
  }
  FUN_100b1f10(&DAT_1011ee8c,*(undefined4 *)(param_1 + 0x44),puVar1);
  FUN_100b1f10(&DAT_1011ef04,*puVar1,param_2);
  FUN_100b1f10(&DAT_1011f184,*puVar1,2);
  return;
}


/* END FUNCTION 0x100af330 */

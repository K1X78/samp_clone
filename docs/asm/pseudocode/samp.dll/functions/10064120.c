/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064120
 * Name: FUN_10064120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064120(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1011ba94;
  if ((*(char *)(param_1 + 4) != '\0') && ((void *)param_1[1] != (void *)0x0)) {
    _free((void *)param_1[1]);
  }
  *param_1 = &PTR_LAB_1011ba74;
  return;
}


/* END FUNCTION 0x10064120 */

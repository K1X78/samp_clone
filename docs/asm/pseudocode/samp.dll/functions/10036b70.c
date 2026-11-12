/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036b70
 * Name: FUN_10036b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * __fastcall FUN_10036b70(int param_1)

{
  undefined *puVar1;
  undefined4 local_4;
  
  local_4 = 0xff;
  puVar1 = &DAT_10156c10;
  (**(code **)(**(int **)(param_1 + 4) + 0x1c))(&DAT_10156c10,&local_4);
  (&DAT_10156c10)[(int)puVar1] = 0;
  return &DAT_10156c10;
}


/* END FUNCTION 0x10036b70 */

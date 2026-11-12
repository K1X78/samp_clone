/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022510
 * Name: FUN_10022510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_10022510(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10021960(param_2);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)puVar1 + 6);
  return param_1;
}


/* END FUNCTION 0x10022510 */

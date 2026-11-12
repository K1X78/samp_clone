/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100227f0
 * Name: FUN_100227f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100227f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined1 local_7 [7];
  
  FUN_10022420(param_1);
  puVar1 = (undefined2 *)FUN_10022500(param_2);
  *param_4 = *puVar1;
  FUN_10022420(param_1);
  puVar2 = (undefined4 *)FUN_10022510(local_7,param_2);
  *param_3 = *puVar2;
  *(undefined2 *)(param_3 + 1) = *(undefined2 *)(puVar2 + 1);
  *(undefined1 *)((int)param_3 + 6) = *(undefined1 *)((int)puVar2 + 6);
  return;
}


/* END FUNCTION 0x100227f0 */

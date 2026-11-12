/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5040
 * Name: FUN_100b5040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b5040(undefined4 *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_14 = *param_1;
  local_18 = param_1[3];
  D3DXQuaternionNormalize(&local_10,&local_20);
  *param_1 = uStack_c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  return;
}


/* END FUNCTION 0x100b5040 */

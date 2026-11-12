/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4fc0
 * Name: FUN_100b4fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4fc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 *puStack_c;
  
  local_14 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  local_18 = param_2[3];
  local_24 = *param_3;
  local_30 = param_3[1];
  local_2c = param_3[2];
  local_28 = param_3[3];
  D3DXQuaternionSlerp(local_10,&local_20,&local_30,param_4);
  *puStack_c = local_14;
  puStack_c[1] = local_20;
  puStack_c[2] = local_1c;
  puStack_c[3] = local_18;
  return;
}


/* END FUNCTION 0x100b4fc0 */

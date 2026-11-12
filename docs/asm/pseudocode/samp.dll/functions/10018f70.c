/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018f70
 * Name: FUN_10018f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018f70(undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011361b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e);
  local_4 = 0;
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  fVar2 = (float10)FUN_100a0240(local_12c,local_128,local_124[0]);
  local_124[0] = (float)(fVar2 + (float10)1.5);
  *(undefined4 *)(iVar1 + 0x2e6) = 0;
  FUN_10003630(0,0);
  FUN_1009ee80(local_12c,local_128,local_124[0]);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018f70 */

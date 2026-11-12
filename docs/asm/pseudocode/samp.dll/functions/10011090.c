/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011090
 * Name: FUN_10011090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10011090(undefined4 *param_1)

{
  int iVar1;
  ushort local_134 [2];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011314b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_134,0x10,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_130,0x20,1);
  FUN_1001f470(local_124,8,1);
  FUN_1001f470(&local_128,8,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (((local_134[0] < 2000) && (*(int *)(iVar1 + 0x3074 + (uint)local_134[0] * 4) != 0)) &&
     (*(int *)(iVar1 + 0x1134 + (uint)local_134[0] * 4) != 0)) {
    FUN_100b7600(local_12c,local_130,local_124[0]);
    FUN_100b7480(local_128);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10011090 */

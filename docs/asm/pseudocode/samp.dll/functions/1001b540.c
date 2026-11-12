/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001b540
 * Name: FUN_1001b540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001b540(undefined4 *param_1)

{
  int iVar1;
  ushort local_134 [2];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [280];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113a3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_134,0x10,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_130,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  if (((local_134[0] < 0x835) && (*(int *)(iVar1 + 4 + (uint)local_134[0] * 4) != 0)) &&
     (*(int *)(iVar1 + 0x20d4 + (uint)local_134[0] * 4) != 0)) {
    FUN_1009ee80(local_12c,local_130,local_128);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001b540 */

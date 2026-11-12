/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100197a0
 * Name: FUN_100197a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100197a0(undefined4 *param_1)

{
  int iVar1;
  ushort local_130 [2];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011373b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_130,0x10,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  if ((((DAT_102aca24 != 0) && (iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc), iVar1 != 0))
      && (local_130[0] < 2000)) && (*(int *)(iVar1 + 0x3074 + (uint)local_130[0] * 4) != 0)) {
    FUN_1009ee80(local_128,local_12c,local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100197a0 */

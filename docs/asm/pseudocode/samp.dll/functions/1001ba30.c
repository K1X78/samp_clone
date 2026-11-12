/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ba30
 * Name: FUN_1001ba30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001ba30(undefined4 *param_1)

{
  int iVar1;
  ushort local_14c [2];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [280];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113adb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_14c,0x10,1);
  FUN_1001f470(local_12c,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f470(local_128,0x20,1);
  FUN_1001f470(&local_140,0x20,1);
  FUN_1001f470(&local_144,0x20,1);
  FUN_1001f470(&local_148,0x20,1);
  FUN_1001f470(&local_130,0x20,1);
  FUN_1001f470(&local_13c,0x20,1);
  FUN_1001f470(&local_138,0x20,1);
  FUN_1001f470(&local_134,0x20,1);
  if ((((DAT_102ac9f0 == 0) || (*(int *)(DAT_102ac9f0 + 0x80) == 0)) ||
      (*(ushort *)(DAT_102ac9f0 + 0x88) != local_14c[0])) &&
     (((iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14), local_14c[0] < 0x835 &&
       (*(int *)(iVar1 + 4 + (uint)local_14c[0] * 4) != 0)) &&
      (*(int *)(iVar1 + 0x20d4 + (uint)local_14c[0] * 4) != 0)))) {
    FUN_100a97c0(local_140,local_144,local_148,local_130,local_13c,local_138,local_134);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001ba30 */

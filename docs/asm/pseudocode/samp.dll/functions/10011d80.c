/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011d80
 * Name: FUN_10011d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10011d80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18c;
  undefined4 local_188;
  void *local_184;
  undefined4 local_180;
  undefined1 local_179;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [54];
  undefined1 local_13a [4];
  undefined1 local_136 [4];
  undefined1 local_132 [4];
  undefined1 local_12e [4];
  undefined1 local_12a;
  undefined1 local_129 [285];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113279;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar2 = &local_180;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_4 = 0;
  local_18c = 0;
  local_188 = 0;
  if (DAT_102aca28 == 0) {
    local_184 = operator_new(0x206d);
    local_4._0_1_ = 1;
    if (local_184 == (void *)0x0) {
      DAT_102aca28 = 0;
    }
    else {
      DAT_102aca28 = FUN_1000d890();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_1000ba40();
    if (DAT_102aca28 == 0) goto LAB_10011f52;
  }
  FUN_1001f470(&local_18c,0x20,1);
  FUN_1001f470(&local_188,0x20,1);
  FUN_1001f470(&local_179,8,1);
  FUN_1001f470(local_178,0x20,1);
  FUN_1001f470(local_174,0x20,1);
  FUN_1001f470(local_170,0x20,1);
  FUN_1001f470(local_13a,0x20,1);
  FUN_1001f470(local_136,0x20,1);
  FUN_1001f470(local_132,0x20,1);
  FUN_1001f470(local_12e,0x20,1);
  FUN_1001f470(&local_12a,8,1);
  FUN_1001f470(local_129,8,1);
  FUN_1000d550(local_18c,&local_180);
  FUN_1000d030(local_188);
LAB_10011f52:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10011d80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025af0
 * Name: FUN_10025af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10025af0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 local_33c;
  undefined1 local_338 [12];
  undefined1 local_32c [12];
  undefined1 local_320 [276];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114381;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),0);
  local_4 = 0;
  FUN_1002af80();
  local_4._0_1_ = 1;
  FUN_1002af80();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_1001f7b0(8);
  FUN_1001f470(&local_33c,0x10,1);
  uVar6 = 0;
  puVar5 = local_320;
  puVar3 = local_20c;
  uVar4 = 0x100;
  FUN_100536f0(puVar3,0x100,puVar5,0);
  FUN_10053d90(puVar3,uVar4,puVar5,uVar6);
  uVar6 = 0;
  puVar5 = local_320;
  puVar3 = local_10c;
  uVar4 = 0x100;
  FUN_100536f0(puVar3,0x100,puVar5,0);
  FUN_10053d90(puVar3,uVar4,puVar5,uVar6);
  cVar1 = FUN_1002b0f0(local_320);
  if (cVar1 != '\0') {
    FUN_1002bcc0(local_32c,local_338,local_20c,local_10c);
    uVar2 = 0x1002;
    FUN_1002c140(param_1 + 4,1,0,1);
    FUN_1002c910(local_338,*(undefined4 *)(param_1 + 0x20c),*(undefined4 *)(param_3 + 2),
                 CONCAT22(uVar2,*(undefined2 *)(param_3 + 6)),local_33c,
                 *(undefined4 *)(param_1 + 0x210),*(undefined1 *)(param_1 + 0x214),1);
  }
  local_4._0_1_ = 1;
  FUN_1002b510();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1002b510();
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10025af0 */

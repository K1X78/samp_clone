/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e9a0
 * Name: FUN_1003e9a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003e9a0(int param_1,undefined4 param_2,undefined2 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_fc;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3 [53];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101150eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10053260();
  local_4 = 0;
  local_fc = 0xf;
  uVar1 = FUN_1002e2b0();
  if (*(uint *)(param_1 + 0xd81) < uVar1) {
    FUN_10038930();
  }
  FUN_100511b0();
  FUN_10052e00(&param_2,4);
  FUN_10052e00(&param_3,2);
  FUN_10052e00(param_1 + 0xd85,0x14);
  FUN_10052fb0();
  puVar2 = (undefined4 *)FUN_10053250();
  local_fb = *puVar2;
  local_f7 = puVar2[1];
  local_f3 = puVar2[2];
  local_ef = puVar2[3];
  local_eb = puVar2[4];
  local_e7 = *(undefined4 *)(param_1 + 0xc2a);
  puVar2 = (undefined4 *)(param_1 + 0xc4a);
  puVar5 = local_e3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar3 = FUN_1002e2b0();
  FUN_1003c410(&local_fc,0x1c8,0,6,0,param_2,param_3,0,0,uVar3,0);
  local_4 = 0xffffffff;
  FUN_10053270();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003e9a0 */

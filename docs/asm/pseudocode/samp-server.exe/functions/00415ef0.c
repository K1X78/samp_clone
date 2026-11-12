/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415ef0
 * Name: FUN_00415ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00415ef0(void *this,void *param_1,int param_2,uint param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c4;
  undefined4 local_c0 [6];
  int local_a8;
  char local_90 [8];
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 local_60 [8];
  undefined4 *local_58;
  undefined4 local_54;
  undefined1 local_30 [8];
  undefined4 *local_28;
  undefined4 local_24;
  
  iVar1 = *(int *)(in_EAX + 0x10);
  puVar4 = *(undefined4 **)(in_EAX + 8);
  puVar5 = local_c0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_88 = local_60;
  local_90[0] = 'E';
  local_60[0] = 0x50;
  local_84 = local_30;
  local_58 = local_c0;
  local_54 = **(undefined4 **)(iVar1 + 0xc);
  local_28 = local_c0;
  local_30[0] = 0x4e;
  local_24 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x14);
  local_c4 = 0;
  local_a8 = FUN_00415d80(local_c0,&local_c4);
  local_c0[0]._0_1_ = 0x84;
  if (param_2 == 0) {
    FUN_004351c0(this,local_90,(int)param_1,param_3);
    uVar3 = extraout_ECX_00;
  }
  else {
    FUN_00434ef0(param_1,this,local_90,(int)param_1,param_3);
    uVar3 = extraout_ECX;
  }
  FUN_0040ec20(uVar3,(int)this);
  return;
}


/* END FUNCTION 0x00415ef0 */

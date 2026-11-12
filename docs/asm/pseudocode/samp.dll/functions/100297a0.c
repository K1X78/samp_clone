/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100297a0
 * Name: FUN_100297a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_100297a0(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  void *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10114503;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_14 = operator_new(0xc);
  if (local_14 == (void *)0x0) {
    local_14 = (void *)0x0;
  }
  else {
    FUN_10026fa0();
  }
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (**(char **)(*param_2 + *(int *)(param_3 + uVar5 * 4) * 4) == '\0') {
        pvVar2 = operator_new(9);
        local_4._0_1_ = 1;
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
          local_4 = (uint)local_4._1_3_ << 8;
        }
        else {
          iVar1 = *(int *)(*param_2 + *(int *)(param_3 + uVar5 * 4) * 4);
          uVar3 = FUN_10026e70(*(undefined4 *)(iVar1 + 1),*(undefined4 *)(iVar1 + 5),
                               *(undefined4 *)(*(int *)(local_10 + 0x18) + 0x20 + iVar4));
          local_4 = (uint)local_4._1_3_ << 8;
        }
      }
      else {
        pvVar2 = operator_new(9);
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_10026c60();
        }
      }
      FUN_10026fe0(uVar3);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x24;
    } while (uVar5 < param_4);
  }
  FUN_100294e0(param_1,&local_14);
  pvVar2 = local_14;
  local_4 = 0xffffffff;
  FUN_10027180();
  ExceptionList = local_c;
  return pvVar2;
}


/* END FUNCTION 0x100297a0 */

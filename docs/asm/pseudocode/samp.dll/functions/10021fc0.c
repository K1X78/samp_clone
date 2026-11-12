/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021fc0
 * Name: FUN_10021fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10021fc0(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined1 local_28 [12];
  int iStack_1c;
  undefined4 *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_100206c0();
  uVar6 = 0;
  local_4 = 0;
  uVar7 = 0x1002;
  iVar2 = FUN_10020850();
  if (iVar2 != 0) {
    do {
      uVar3 = FUN_10020840(uVar6);
      cVar1 = FUN_10021610(uVar3);
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)FUN_10020840(uVar6);
        FUN_10020700(*puVar4,*(undefined2 *)(puVar4 + 1));
      }
      uVar6 = uVar6 + 1;
      uVar7 = 0x1002;
      uVar5 = FUN_10020850();
    } while (uVar6 < uVar5);
  }
  if (local_14 != 0) {
    (**(code **)(*param_3 + 0xa0))(local_28,*local_18,CONCAT22(uVar7,*(undefined2 *)(local_18 + 1)))
    ;
    cVar1 = FUN_10021610(local_28);
    if (cVar1 == '\0') {
      FUN_10021630(local_28,local_28);
    }
    param_2 = FUN_10020850();
    param_2 = param_2 + local_14;
    FUN_1001faa0(&param_2,0x10,1);
    uVar6 = 0;
    iVar2 = FUN_10020850();
    if (iVar2 != 0) {
      do {
        puVar4 = (undefined4 *)FUN_10020840(uVar6);
        param_2 = *puVar4;
        iStack_1c = CONCAT22(iStack_1c._2_2_,*(undefined2 *)(puVar4 + 1));
        FUN_1001faa0(&param_2,0x20,1);
        param_2 = iStack_1c;
        FUN_1001faa0(&param_2,0x10,1);
        uVar6 = uVar6 + 1;
        uVar5 = FUN_10020850();
      } while (uVar6 < uVar5);
    }
    iVar2 = local_14;
    puVar4 = local_18;
    if (local_14 != 0) {
      do {
        param_2 = *puVar4;
        iStack_1c = CONCAT22(iStack_1c._2_2_,*(undefined2 *)(puVar4 + 1));
        FUN_1001faa0(&param_2,0x20,1);
        param_2 = iStack_1c;
        FUN_1001faa0(&param_2,0x10,1);
        iVar2 = iVar2 + -1;
        puVar4 = (undefined4 *)((int)puVar4 + 6);
      } while (iVar2 != 0);
      for (; local_14 != 0; local_14 = local_14 + -1) {
        (**(code **)(*param_3 + 0x30))(param_1,3,9,0x1f,*local_18,*(undefined2 *)(local_18 + 1),0);
        local_18 = (undefined4 *)((int)local_18 + 6);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_100206d0();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10021fc0 */

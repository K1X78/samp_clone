/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f450
 * Name: FUN_1004f450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1004f450(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,int param_5,
            undefined4 param_6,uint param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  uint uVar5;
  undefined4 unaff_retaddr;
  undefined1 local_18 [4];
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_8;
  local_18[0] = 0x44;
  local_14 = param_1;
  FUN_1001faa0(local_18,8,1);
  param_8._0_1_ = param_2;
  FUN_1001fbf0(&param_8,8,1);
  param_8._0_1_ = (undefined1)param_3;
  FUN_1001fbf0(&param_8,8,1);
  param_8 = (undefined4 *)CONCAT31(param_8._1_3_,param_4);
  FUN_1001fbf0(&param_8,8,1);
  param_8 = (undefined4 *)param_7;
  FUN_1001faa0(&param_8,0x20,1);
  FUN_1001f420();
  if ((param_7 & 7) == 0) {
    FUN_1001fb50(param_6,param_7 + 7 >> 3);
  }
  else {
    FUN_1001faa0(param_6,param_7,0);
  }
  iVar1 = param_5;
  param_7 = *puVar2;
  uVar5 = 0;
  if (*(int *)(param_5 + 0xb) != 0) {
    do {
      FUN_1001f7c0(param_7);
      iVar3 = local_14;
      puVar4 = *(undefined4 **)(*(int *)(iVar1 + 7) + uVar5 * 4);
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)(param_1 + 0x19) + 0xa0))
                         ((int)&uStack_10 + 2,*puVar4,*(undefined2 *)(puVar4 + 1));
      param_3 = *puVar4;
      uStack_10 = CONCAT22(uStack_10._2_2_,*(undefined2 *)(puVar4 + 1));
      FUN_1001faa0(&param_3,0x20,1);
      param_3 = uStack_10;
      FUN_1001faa0(&param_3,0x10,1);
      FUN_1004edf0(*(undefined4 *)(*(int *)(iVar1 + 7) + uVar5 * 4),puVar2,param_6);
      puVar4 = *(undefined4 **)(*(int *)(iVar1 + 7) + uVar5 * 4);
      (**(code **)(**(int **)(iVar3 + 0x19) + 0x30))
                (puVar2,uStack_8,uStack_4,unaff_retaddr,*puVar4,*(undefined2 *)(puVar4 + 1),0);
      uVar5 = uVar5 + 1;
      param_1 = unaff_EBP;
    } while (uVar5 < *(uint *)(iVar1 + 0xb));
  }
  return;
}


/* END FUNCTION 0x1004f450 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100315a0
 * Name: FUN_100315a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100315a0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined2 param_5,
            undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 unaff_retaddr;
  undefined2 uVar6;
  int iStack_134;
  undefined1 auStack_128 [276];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10114a2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(**(int **)(param_1 + 5) + 0x5c))(param_6,param_7);
  if (iVar1 == -1) {
    uVar4 = 0;
  }
  else {
    FUN_1001f1f0();
    pvStack_c = (void *)0x0;
    FUN_1001faa0(&stack0xfffffec4,8,1);
    uVar4 = uStack_4;
    FUN_1001faa0(&stack0xfffffec8,0x20,1);
    FUN_1001faa0(&stack0xfffffec8,0x10,1);
    puVar2 = operator_new(0x24);
    *(undefined4 *)((int)puVar2 + 5) = uVar4;
    *(undefined2 *)((int)puVar2 + 9) = unaff_retaddr;
    *(undefined4 *)((int)puVar2 + 0xf) = param_6;
    *(undefined2 *)((int)puVar2 + 0x13) = param_7;
    if (param_3 == 0) {
      *(undefined4 *)((int)puVar2 + 0x15) = 0;
    }
    else {
      puVar3 = operator_new(param_3);
      *(undefined4 **)((int)puVar2 + 0x15) = puVar3;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = param_3 & 3; param_7 = param_5, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    *(undefined4 *)((int)puVar2 + 0x1d) = DAT_1013c708;
    *(undefined2 *)((int)puVar2 + 0x21) = DAT_1013c70c;
    *(uint *)((int)puVar2 + 0x19) = param_3;
    *(undefined4 *)((int)puVar2 + 0xf) = param_6;
    *(undefined2 *)((int)puVar2 + 0x13) = param_7;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    iVar1 = FUN_1002e2b0();
    *(int *)((int)puVar2 + 0xb) = iVar1 + 30000;
    *(undefined1 *)((int)puVar2 + 0x23) = 0;
    uVar6 = 0x1003;
    FUN_100314b0(puVar2);
    (**(code **)(**(int **)(iStack_134 + 5) + 0x30))
              (auStack_128,1,8,0,param_6,CONCAT22(uVar6,param_7),0);
    pvStack_c = (void *)0xffffffff;
    FUN_1001f390();
    uVar4 = 1;
  }
  ExceptionList = pvStack_14;
  return uVar4;
}


/* END FUNCTION 0x100315a0 */

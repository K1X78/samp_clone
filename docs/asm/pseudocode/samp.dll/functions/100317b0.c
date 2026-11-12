/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100317b0
 * Name: FUN_100317b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100317b0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  int unaff_retaddr;
  undefined2 uVar4;
  undefined2 uStack_240;
  undefined4 local_23c;
  undefined2 local_238 [278];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114a56;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 4) != '\0') {
    ExceptionList = &local_c;
    FUN_1001f280(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),0);
    local_4 = 0;
    FUN_1001f1f0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_1001f7b0(8);
    FUN_1001f470(&local_23c,0x20,1);
    uVar4 = 0;
    cVar1 = FUN_1001f470(local_238,0x10,1);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(**(int **)(param_1 + 5) + 0x5c))(local_23c,CONCAT22(uVar4,local_238[0]));
      if (iVar2 == -1) {
        uVar4 = 0;
        FUN_1001faa0(&stack0xfffffdb8,8,1);
        FUN_100212c0(unaff_EBX,CONCAT22(uVar4,uStack_240));
        (**(code **)(**(int **)(param_1 + 5) + 0x30))
                  (&local_23c,1,8,0,*(undefined4 *)(param_3 + 2),*(undefined2 *)(param_3 + 6),0);
      }
      else {
        piVar3 = operator_new(0x24);
        *(undefined4 *)((int)piVar3 + 5) = unaff_EBX;
        *(undefined2 *)((int)piVar3 + 9) = uStack_240;
        *(undefined4 *)((int)piVar3 + 0xf) = DAT_1013c708;
        *(undefined2 *)((int)piVar3 + 0x13) = DAT_1013c70c;
        *(undefined4 *)((int)piVar3 + 0x15) = 0;
        *(undefined4 *)((int)piVar3 + 0x1d) = *(undefined4 *)(unaff_retaddr + 2);
        *(undefined2 *)((int)piVar3 + 0x21) = *(undefined2 *)(unaff_retaddr + 6);
        *(undefined4 *)((int)piVar3 + 0x19) = 0;
        *(undefined1 *)(piVar3 + 1) = 1;
        iVar2 = FUN_1002e2b0();
        *piVar3 = iVar2 + 100;
        *(undefined1 *)((int)piVar3 + 0x23) = 1;
        iVar2 = FUN_1002e2b0();
        *(int *)((int)piVar3 + 0xb) = iVar2 + 30000;
        FUN_100314b0(piVar3);
        uVar4 = 0x1003;
        (**(code **)(**(int **)(param_1 + 5) + 0x78))
                  (*(undefined4 *)((int)piVar3 + 5),*(undefined2 *)((int)piVar3 + 9));
        (**(code **)(**(int **)(param_1 + 5) + 0x78))
                  (*(undefined4 *)((int)piVar3 + 0x1d),
                   CONCAT22(uVar4,*(undefined2 *)((int)piVar3 + 0x21)));
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_1001f390();
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100317b0 */

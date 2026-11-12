/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f460
 * Name: FUN_1006f460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006f460(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101161ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 != 0) {
    pvVar2 = operator_new(0x158);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1008e810(*(undefined4 *)(param_1 + 0x1c));
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    FUN_1008c140(uVar3);
    piVar1 = *(int **)(param_1 + 0x20);
    piVar1[2] = 10;
    piVar1[3] = 10;
    (**(code **)(*piVar1 + 0x4c))();
    piVar1 = *(int **)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0xc);
    piVar1[5] = *(int *)(param_1 + 0x10) + -100;
    piVar1[4] = iVar4;
    (**(code **)(*piVar1 + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    FUN_10085e90(0xc8ffffff,0xc8808080,0);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4d) = 0;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))(0);
    FUN_10090790(0x14,"BUTTON1",10,5,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                 ,0,0,0);
    FUN_10090790(0x15,"BUTTON2",0x6e,5,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),0,0,0);
    piVar1 = (int *)(param_1 + 0x24);
    FUN_10090b30(0x13,&DAT_10117a39,10,0xaf,0x23a,0x28,1,piVar1);
    iVar4 = FUN_10065890(&DAT_1011c30c);
    if (iVar4 != 0) {
      FUN_10085940(1);
      FUN_10085460();
    }
    FUN_10085e90(0xf0050505,0xc8808080,0);
    (**(code **)(*(int *)*piVar1 + 0x48))(0xffffffff);
    *(undefined4 *)(*piVar1 + 0x133) = 0xff969696;
    *(undefined4 *)(*piVar1 + 0x12f) = 0xffb92228;
    *(undefined4 *)(*piVar1 + 299) = 0xff0a0a0f;
    (**(code **)(*(int *)*piVar1 + 0x38))(0);
    (**(code **)(*(int *)*piVar1 + 0x40))(0);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1006f460 */

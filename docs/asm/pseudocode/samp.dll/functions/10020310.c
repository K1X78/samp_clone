/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020310
 * Name: FUN_10020310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10020310(int *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar5;
  undefined4 in_stack_ffffffe8;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((uint)in_stack_ffffffe8 >> 0x10);
  iVar1 = FUN_100202f0();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 8))
              (param_1,param_2,CONCAT22(uVar7,param_3),"No registered commands\r\n");
    return;
  }
  uVar4 = 0;
  iVar1 = FUN_100202f0();
  if (iVar1 != 0) {
    do {
      uVar5 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
      puVar2 = (undefined4 *)FUN_100202e0(uVar4);
      uVar7 = 0x1011;
      in_stack_ffffffe4 = CONCAT22(uVar5,param_3);
      (**(code **)(*param_1 + 8))(param_1,param_2,in_stack_ffffffe4,&DAT_101185d8,*puVar2);
      iVar1 = FUN_100202f0();
      if (uVar4 < iVar1 - 1U) {
        uVar6 = CONCAT22(uVar7,param_3);
        in_stack_ffffffe4 = param_2;
        (**(code **)(*param_1 + 8))(param_1,param_2,uVar6,&DAT_101185d4);
        uVar7 = (undefined2)((uint)uVar6 >> 0x10);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_100202f0();
    } while (uVar4 < uVar3);
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,CONCAT22(uVar7,param_3),&DAT_101185d0);
  return;
}


/* END FUNCTION 0x10020310 */

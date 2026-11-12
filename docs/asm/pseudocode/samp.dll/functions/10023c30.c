/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023c30
 * Name: FUN_10023c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10023c30(int param_1,int *param_2,undefined4 param_3,undefined2 param_4,undefined1 param_5)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffb4;
  undefined2 uVar4;
  undefined2 uVar6;
  undefined4 uVar5;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffb4 >> 0x10);
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)(param_1 + 0x4c) == '\0') &&
     (ExceptionList = &local_c, cVar2 = FUN_10022280(&param_5), cVar2 == '\0')) {
    ExceptionList = local_c;
    return;
  }
  uVar6 = 0x1002;
  FUN_10020790();
  uVar1 = param_4;
  uVar3 = param_3;
  local_1a = param_5;
  local_4 = 0;
  local_20 = param_3;
  local_1c = param_4;
  uVar5 = CONCAT22(uVar6,param_4);
  (**(code **)(*param_2 + 0xa0))(&param_3,param_3,uVar5);
  uVar3 = (**(code **)(*param_2 + 0x7c))(uVar3,CONCAT22(uVar4,uVar1),param_2);
  FUN_100235d0(local_18,&local_20,auStack_28,uVar3,uVar5);
  local_4 = 0xffffffff;
  FUN_100221d0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10023c30 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023b70
 * Name: FUN_10023b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10023b70(int *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  void *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_3;
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114238;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10022740(param_2,param_3);
  uVar4 = 0x1002;
  FUN_10020790();
  local_4 = 0;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xa0))(&param_2,uVar1,CONCAT22(uVar4,uVar2));
  FUN_100237d0(&stack0xffffffdc,param_1,uVar1,uVar2,*puVar3,*(undefined2 *)(puVar3 + 1),param_1);
  FUN_100221d0();
  ExceptionList = local_18;
  return;
}


/* END FUNCTION 0x10023b70 */

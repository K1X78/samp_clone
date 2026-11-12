/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003eaf0
 * Name: FUN_1003eaf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003eaf0(int *param_1,undefined4 param_2,undefined2 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffebc;
  undefined2 uVar3;
  undefined1 local_124 [4];
  undefined4 local_120 [3];
  undefined4 local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = (undefined2)((uint)in_stack_fffffebc >> 0x10);
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011510b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f220((*(int *)((int)param_1 + 0xb) + 7 >> 3) + 1);
  local_4 = 0;
  local_124[0] = 0x29;
  FUN_1001faa0(local_124,8,1);
  FUN_1001fb50(*(undefined4 *)((int)param_1 + 0x17),*(int *)((int)param_1 + 0xb) + 7 >> 3);
  if (param_4 == '\0') {
    uVar3 = 0x1003;
    cVar1 = FUN_100331a0(&DAT_1013c7cc);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x30))(local_120,0,8,0,param_2,CONCAT22(uVar3,param_3),0);
    }
    else {
      (**(code **)(*param_1 + 0x30))(local_120,0,8,0,param_2,CONCAT22(uVar3,param_3),1);
    }
  }
  else {
    cVar1 = FUN_100331a0(&DAT_1013c7cc);
    if (cVar1 == '\0') {
      uVar2 = FUN_1002e2b0();
    }
    else {
      uVar2 = FUN_1002e2b0();
    }
    FUN_1003c410(local_114,local_120[0],0,8,0,param_2,CONCAT22(uVar3,param_3),cVar1 != '\0',0,uVar2,
                 0);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003eaf0 */

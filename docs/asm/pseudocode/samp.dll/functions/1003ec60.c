/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ec60
 * Name: FUN_1003ec60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003ec60(int *param_1,undefined4 param_2,undefined2 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 in_stack_fffffeb8;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  undefined4 auStack_120 [3];
  undefined4 uStack_114;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar3 = (undefined2)((uint)in_stack_fffffeb8 >> 0x10);
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1011512b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    FUN_1001f220(5);
    uStack_4 = 0;
    auStack_128[0] = 6;
    FUN_1001faa0(auStack_128,8,1);
    uVar2 = FUN_1002e310();
    uStack_124 = FUN_1002e2b0();
    uVar4 = 0;
    FUN_1001faa0(&uStack_124,0x20,1);
    if (param_4 == '\0') {
      (**(code **)(*param_1 + 0x30))(auStack_120,0,6,0,param_2,CONCAT22(uVar4,param_3),0);
    }
    else {
      FUN_1003c410(uStack_114,auStack_120[0],0,6,0,param_2,CONCAT22(uVar3,param_3),0,0,uVar2);
    }
    uStack_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x1003ec60 */

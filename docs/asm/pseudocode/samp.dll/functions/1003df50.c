/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003df50
 * Name: FUN_1003df50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1003df50(int param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
  cVar1 = FUN_100331a0(param_1 + 0x22d);
  if (cVar1 == '\0') {
    iVar2 = FUN_1003c2a0(param_2,CONCAT22(uVar3,param_3),0,1);
    if (iVar2 != 0) {
      FUN_1001f3b0();
      FUN_1001fb50(param_4,param_5);
    }
  }
  else {
    FUN_1001f3b0();
    if ((param_4 != 0) && (0 < param_5)) {
      FUN_1001fb50(param_4,param_5);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x1003df50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e3b0
 * Name: FUN_1003e3b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003e3b0(undefined4 param_1,undefined2 param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 local_124 [4];
  undefined4 local_120;
  undefined4 local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011508b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_100331a0(&DAT_1013c7cc);
  if (cVar1 == '\0') {
    FUN_1001f220(1);
    local_4 = 0;
    local_124[0] = 0x20;
    FUN_1001faa0(local_124,8,1);
    if (param_3 == '\0') {
      FUN_1003aa40(local_114,local_120,1,6,param_4,param_1,param_2,0,1);
    }
    else {
      uVar4 = 0x1003;
      iVar2 = FUN_1003c2a0(param_1,param_2,0,1);
      if (iVar2 != 0) {
        uVar3 = FUN_1002e2b0();
        FUN_1003c410(local_114,local_120,1,6,param_4,param_1,CONCAT22(uVar4,param_2),0,0,uVar3,0);
        *(undefined4 *)(iVar2 + 0xc62) = 1;
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003e3b0 */

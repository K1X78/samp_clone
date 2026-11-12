/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0090
 * Name: FUN_100a0090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_100a0090(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101165db;
  local_c = ExceptionList;
  cVar1 = *(char *)(param_2 + -0x122 + param_1);
  ExceptionList = &local_c;
  pvVar2 = operator_new(0xb8);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100b7f00(param_2,param_3,param_4,param_5,param_6,cVar1 != '\0',param_7);
  }
  ExceptionList = local_c;
  return -(uint)(*(int *)(uVar3 + 0x4c) != 0) & uVar3;
}


/* END FUNCTION 0x100a0090 */

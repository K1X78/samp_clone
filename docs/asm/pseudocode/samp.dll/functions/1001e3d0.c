/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e3d0
 * Name: FUN_1001e3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1001e3d0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113ebb;
  local_c = ExceptionList;
  uVar3 = param_2 & 0xffff;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x2400 + uVar3 * 4) != 0) {
    ExceptionList = &local_c;
    FUN_1001e2b0(param_2);
  }
  pvVar1 = operator_new(0x9d6);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_100b32e0(param_3,param_4);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x2400 + uVar3 * 4) = iVar2;
      *(undefined4 *)(param_1 + uVar3 * 4) = 1;
      ExceptionList = local_c;
      return iVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1001e3d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007b90
 * Name: FUN_10007b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_10007b90(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011294b;
  local_c = ExceptionList;
  param_2 = param_2 & 0xff;
  pvVar1 = *(void **)(param_1 + param_2 * 4);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _free(pvVar1);
    *(undefined4 *)(param_1 + param_2 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x200 + param_2 * 4) = 0;
  pvVar1 = operator_new(0x3b8);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_100a7160(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x200 + param_2 * 4) = 1;
      *(int *)(param_1 + param_2 * 4) = iVar2;
      ExceptionList = local_c;
      return iVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10007b90 */

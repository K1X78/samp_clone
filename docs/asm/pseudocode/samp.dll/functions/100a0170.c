/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0170
 * Name: FUN_100a0170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100a0170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101165fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x119c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_100a8d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_9,
                         param_10);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x100a0170 */

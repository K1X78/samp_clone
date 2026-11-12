/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067310
 * Name: FUN_10067310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10067310(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011602b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x116) = param_2;
  if (param_2 != 0) {
    pvVar1 = operator_new(0xb2);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1008e750(param_2);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x11e) = uVar2;
    FUN_1008c140(uVar2);
    (**(code **)(**(int **)(param_1 + 0x11e) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x11e) + 0x38))(1);
    FUN_10066c70();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10067310 */

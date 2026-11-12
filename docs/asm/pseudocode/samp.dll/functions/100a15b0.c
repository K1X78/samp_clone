/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a15b0
 * Name: FUN_100a15b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a15b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1011661b;
  local_10 = ExceptionList;
  piVar3 = (int *)0x0;
  puVar4 = &DAT_1018eb98;
  ExceptionList = &local_10;
  for (iVar2 = 0x1e8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_100aa0b0(&DAT_004e7529,0x27);
  puVar4 = (undefined4 *)&DAT_004e7529;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0x90909090;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0x9090;
  *(undefined1 *)((int)puVar4 + 2) = 0x90;
  iVar2 = FUN_100b3860();
  if (((param_3 != 0) && (399 < param_4)) && (param_4 < 0x264)) {
    pvVar1 = operator_new(0xb8);
    local_8 = 0;
    if (pvVar1 != (void *)0x0) {
      piVar3 = (int *)FUN_100b7f00(param_4,0,0,0,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_100b6e20(param_5,0xffffffff);
    (**(code **)(*piVar3 + 8))();
    _DAT_1018f124 = piVar3[0x13];
    _DAT_1018f004 = _DAT_1018f004 | 0x100;
  }
  if (iVar2 != 0) {
    (*(code *)0x4e71e0)(0xa4,param_1,param_2);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


/* END FUNCTION 0x100a15b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090a50
 * Name: FUN_10090a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_10090a50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined1 param_8,undefined4 *param_9)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011644b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x138);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1008ed00(param_1);
  }
  local_4 = 0xffffffff;
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return -0x7ff8fff2;
  }
  iVar3 = FUN_1008c140(piVar2);
  if (-1 < iVar3) {
    piVar2[0xb] = param_2;
    piVar2[2] = param_4;
    piVar2[3] = param_5;
    (**(code **)(*piVar2 + 0x4c))();
    piVar2[4] = param_6;
    piVar2[5] = param_7;
    (**(code **)(*piVar2 + 0x4c))();
    *(undefined1 *)((int)piVar2 + 7) = param_8;
    if (param_3 != 0) {
      FUN_10085000(param_3,0);
    }
    iVar3 = 0;
  }
  ExceptionList = local_c;
  return iVar3;
}


/* END FUNCTION 0x10090a50 */

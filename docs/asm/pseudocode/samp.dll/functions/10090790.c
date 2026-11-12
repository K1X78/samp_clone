/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090790
 * Name: FUN_10090790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_10090790(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,undefined1 param_9,undefined4 *param_10)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  pvVar1 = operator_new(0x152);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1008df20(param_1);
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar3 = FUN_1008c140(piVar2);
  if (-1 < iVar3) {
    piVar2[0xb] = param_2;
    FUN_100875c0(param_3);
    piVar2[2] = param_4;
    piVar2[3] = param_5;
    (**(code **)(*piVar2 + 0x4c))();
    piVar2[5] = param_7;
    piVar2[4] = param_6;
    (**(code **)(*piVar2 + 0x4c))();
    piVar2[0xd] = param_8;
    *(undefined1 *)((int)piVar2 + 7) = param_9;
    iVar3 = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x10090790 */

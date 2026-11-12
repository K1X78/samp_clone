/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100909a0
 * Name: FUN_100909a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_100909a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined1 param_10,
            undefined4 *param_11)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  pvVar1 = operator_new(0x87);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1008e6e0(param_1);
  }
  if (param_11 != (undefined4 *)0x0) {
    *param_11 = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar3 = FUN_1008c140(piVar2);
  if (-1 < iVar3) {
    piVar2[0xb] = param_2;
    piVar2[2] = param_3;
    piVar2[3] = param_4;
    (**(code **)(*piVar2 + 0x4c))();
    piVar2[4] = param_5;
    piVar2[5] = param_6;
    (**(code **)(*piVar2 + 0x4c))();
    *(undefined1 *)((int)piVar2 + 7) = param_10;
    FUN_100880a0(param_7,param_8);
    FUN_10084d60(param_9,0);
    iVar3 = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x100909a0 */

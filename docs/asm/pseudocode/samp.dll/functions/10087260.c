/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087260
 * Name: FUN_10087260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10087260(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = FUN_10086b40(*(undefined4 *)(param_2 + 4));
  if (iVar1 == 0) {
    return 0x80004005;
  }
  uVar3 = *(uint *)(param_2 + 8);
  if (*(float *)(param_2 + 0x5c) < 1.0) {
    if (*(float *)(param_2 + 0x5c) < 0.0 == (*(float *)(param_2 + 0x5c) == 0.0)) {
      uVar5 = FUN_100f9324();
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xff;
  }
  if (*(float *)(param_2 + 0x60) < 1.0) {
    if (*(float *)(param_2 + 0x60) < 0.0 == (*(float *)(param_2 + 0x60) == 0.0)) {
      uVar4 = FUN_100f9324();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if (*(float *)(param_2 + 100) < 1.0) {
    if (*(float *)(param_2 + 100) < 0.0 == (*(float *)(param_2 + 100) == 0.0)) {
      uVar6 = FUN_100f9324();
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xff;
  }
  if (*(float *)(param_2 + 0x68) < 1.0) {
    if (*(float *)(param_2 + 0x68) < 0.0 == (*(float *)(param_2 + 0x68) == 0.0)) {
      iVar2 = FUN_100f9324();
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  uVar3 = (**(code **)(**(int **)(iVar1 + 0x104) + 0x3c))
                    (*(int **)(iVar1 + 0x104),0,param_1,param_4,param_3,uVar3 | 0x400,
                     ((iVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar6);
  return uVar3 & (-1 < (int)uVar3) - 1;
}


/* END FUNCTION 0x10087260 */

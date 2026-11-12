/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100951a0
 * Name: FUN_100951a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100951a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  tagRECT local_10;
  
  if (*param_1 == 0) {
    return -0x7ff8ffa9;
  }
  SetRect(&local_10,param_1[6],param_1[7],0,0);
  if ((float)param_1[2] < 1.0) {
    if ((float)param_1[2] < 0.0 == ((float)param_1[2] == 0.0)) {
      uVar3 = FUN_100f9324();
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xff;
  }
  if ((float)param_1[3] < 1.0) {
    if ((float)param_1[3] < 0.0 == ((float)param_1[3] == 0.0)) {
      uVar2 = FUN_100f9324();
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xff;
  }
  if ((float)param_1[4] < 1.0) {
    if ((float)param_1[4] < 0.0 == ((float)param_1[4] == 0.0)) {
      uVar4 = FUN_100f9324();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if ((float)param_1[5] < 1.0) {
    if ((float)param_1[5] < 0.0 == ((float)param_1[5] == 0.0)) {
      iVar1 = FUN_100f9324();
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xff;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0x38))
                    ((int *)*param_1,param_1[1],param_2,0xffffffff,&local_10,0x100,
                     ((iVar1 << 8 | uVar3) << 8 | uVar2) << 8 | uVar4);
  if (-1 < iVar1) {
    param_1[7] = param_1[7] + param_1[8];
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100951a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006c3f0
 * Name: FUN_1006c3f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1006c3f0(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4,float param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  float local_18 [4];
  float local_8;
  float local_4;
  
  iVar3 = FUN_100b12d0(0x100,0x100,0,0x505);
  iVar4 = FUN_100b1320(iVar3);
  if ((iVar3 == 0) || (iVar4 == 0)) {
    return 0;
  }
  if ((((param_2 == 0x55d) || (param_2 == 0xc2e)) || (param_2 == 0xde0)) || (param_2 == 0xde1)) {
    param_2 = 0x48c7;
  }
  bVar2 = false;
  iVar5 = FUN_100a07b0(param_2);
  if (iVar5 == 0) {
    bVar2 = true;
    FUN_100a0780(param_2,2);
    FUN_100a07a0();
    iVar5 = FUN_100a07b0(param_2);
    while (iVar5 == 0) {
      Sleep(1);
      iVar5 = FUN_100a07b0(param_2);
    }
  }
  iVar5 = FUN_100b5d90(param_2);
  if (iVar5 == 0) {
    return iVar4;
  }
  fVar7 = (float10)FUN_100b5ea0(param_2);
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  param_5 = (float)(((float10)-0.1 - fVar7 * (float10)2.25) * (float10)param_5);
  FUN_100b5f50(param_2,local_18);
  iVar1 = *(int *)(iVar5 + 4);
  if (iVar1 != 0) {
    local_18[3] = -local_18[0];
    local_4 = 50.0 - local_18[2];
    local_8 = param_5;
    FUN_100b18f0(iVar1,local_18 + 3,1);
    if (param_2 == 0x48c7) {
      fVar8 = 180.0;
    }
    else {
      if (*param_4 != 0.0) {
        FUN_100b1920(iVar1,0,*param_4);
      }
      if (param_4[1] != 0.0) {
        FUN_100b1920(iVar1,1,param_4[1]);
      }
      if (param_4[2] == 0.0) goto LAB_1006c5d6;
      fVar8 = param_4[2];
    }
    FUN_100b1920(iVar1,2,fVar8);
  }
LAB_1006c5d6:
  FUN_100b15b0(*param_1,iVar3,param_1[5]);
  FUN_100b1840(*param_1);
  FUN_100b14f0(*param_1,&param_3,3);
  FUN_100b1520(*param_1);
  FUN_100b17c0(param_1[2]);
  FUN_100c54f0(6,1);
  FUN_100c54f0(8,1);
  FUN_100c54f0(7,2);
  FUN_100c54f0(0x1e,0);
  FUN_100c54f0(0x14,0);
  FUN_100c54f0(0xe,0);
  FUN_100b5e70(iVar5);
  uVar6 = FUN_100a7630(param_2);
  FUN_100b4120(uVar6);
  FUN_100b1550(*param_1);
  FUN_100b1800(param_1[2]);
  FUN_100b5df0(iVar5);
  if (bVar2) {
    FUN_100a07e0(param_2,0);
  }
  return iVar4;
}


/* END FUNCTION 0x1006c3f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009cc10
 * Name: FUN_1009cc10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009cc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
                 )

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar1 = FUN_100b3870();
  FUN_1009cb50(param_2,param_3,param_4,0x43fa0000);
  piVar2 = (int *)(iVar1 + 0x14);
  local_4 = 20000;
  do {
    if (((piVar2[-5] != 0) && (piVar2[-5] != 0x863c40)) &&
       ((*(short *)((int)piVar2 + 0xe) == param_1 || (param_1 == -1)))) {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        iVar5 = piVar2[-2];
        iVar4 = piVar2[-3];
        iVar1 = piVar2[-4];
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x38);
        iVar4 = *(int *)(iVar1 + 0x34);
        iVar1 = *(int *)(iVar1 + 0x30);
      }
      fVar3 = (float10)FUN_100b4570(iVar1,iVar4,iVar5,param_2,param_3,param_4);
      if (fVar3 < (float10)param_5 != (fVar3 == (float10)param_5)) {
        FUN_1009cab0(piVar2 + -5);
      }
    }
    piVar2 = piVar2 + 0xe;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar1 = FUN_100b3890();
  piVar2 = (int *)(iVar1 + 0x14);
  local_4 = 16000;
  do {
    if (((piVar2[-5] != 0) && (piVar2[-5] != 0x863c40)) &&
       ((*(short *)((int)piVar2 + 0xe) == param_1 || (param_1 == -1)))) {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        iVar5 = piVar2[-2];
        iVar4 = piVar2[-3];
        iVar1 = piVar2[-4];
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x38);
        iVar4 = *(int *)(iVar1 + 0x34);
        iVar1 = *(int *)(iVar1 + 0x30);
      }
      fVar3 = (float10)FUN_100b4570(iVar1,iVar4,iVar5,param_2,param_3,param_4);
      if (fVar3 < (float10)param_5 != (fVar3 == (float10)param_5)) {
        FUN_1009cab0(piVar2 + -5);
      }
    }
    piVar2 = piVar2 + 0xe;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar1 = FUN_100b38b0();
  piVar2 = (int *)(iVar1 + 0x14);
  local_4 = 0xc1c;
  do {
    if (((piVar2[-5] != 0) && (piVar2[-5] != 0x863c40)) &&
       ((*(short *)((int)piVar2 + 0xe) == param_1 || (param_1 == -1)))) {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        iVar5 = piVar2[-2];
        iVar4 = piVar2[-3];
        iVar1 = piVar2[-4];
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x38);
        iVar4 = *(int *)(iVar1 + 0x34);
        iVar1 = *(int *)(iVar1 + 0x30);
      }
      fVar3 = (float10)FUN_100b4570(iVar1,iVar4,iVar5,param_2,param_3,param_4);
      if (fVar3 < (float10)param_5 != (fVar3 == (float10)param_5)) {
        FUN_1009ca80(piVar2 + -5);
      }
    }
    piVar2 = piVar2 + 0x67;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


/* END FUNCTION 0x1009cc10 */

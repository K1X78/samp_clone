/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046ab70
 * Name: FUN_0046ab70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046ab70(void *this,byte *param_1,uint *param_2)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  void *local_4;
  
  if (0xf < *(int *)((int)this + 0x1030)) {
    return in_EAX & 0xffffff00;
  }
  iVar5 = 0;
  pbVar7 = (byte *)((int)this + 0x40);
  do {
    pbVar2 = param_1;
    pbVar6 = pbVar7;
    if (*(int *)((int)this + iVar5 * 4) == 0) break;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0046abc4:
        in_EAX = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0046abc9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0046abc4;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    in_EAX = 0;
LAB_0046abc9:
    if (in_EAX == 0) goto LAB_0046aca7;
    iVar5 = iVar5 + 1;
    pbVar7 = pbVar7 + 0xff;
  } while (iVar5 < 0x10);
  if (iVar5 != 0x10) {
    local_4 = this;
    piVar3 = operator_new(0x68);
    *(int **)((int)this + iVar5 * 4) = piVar3;
    piVar8 = piVar3;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    in_EAX = FUN_0046fb60(piVar3,param_2);
    if (in_EAX == 0) {
      FUN_00404b40(this_00,piVar3);
      FUN_00405f40(this_01,piVar3);
      FUN_00406fe0(this_02,piVar3);
      FUN_00405bc0(this_03,piVar3);
      FUN_004072f0(piVar3);
      FUN_0047a100(this_04,piVar3);
      FUN_00481880(this_05,piVar3);
      FUN_00469c30(DAT_004fc440,piVar3);
      iVar4 = FUN_00401710(piVar3,(byte *)"OnFilterScriptInit",(int *)&local_4);
      if (iVar4 == 0) {
        FUN_00401c90(piVar3,(uint *)&local_4,(int)local_4);
      }
      iVar5 = (iVar5 * 0xff + 0x40) - (int)param_1;
      do {
        bVar1 = *param_1;
        param_1[(int)this + iVar5] = bVar1;
        param_1 = param_1 + 1;
      } while (bVar1 != 0);
      iVar5 = *(int *)((int)this + 0x1030) + 1;
      *(int *)((int)this + 0x1030) = iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
LAB_0046aca7:
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x0046ab70 */

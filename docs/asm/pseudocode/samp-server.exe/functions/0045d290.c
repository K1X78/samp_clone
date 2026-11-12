/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d290
 * Name: FUN_0045d290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0045d290(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,byte param_5,
            char param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_4;
  
  iVar4 = param_3;
  if ((10 < param_4) || (param_4 < 0)) {
    param_4 = 8;
  }
  if ((4 < param_3) || (param_3 < 0)) {
    param_3 = 1;
  }
  if (0x1f < param_5) {
    param_5 = 0;
  }
  uVar9 = param_2 + 7 >> 3;
  if (param_2 == 0) {
    return iVar4 & 0xffffff00;
  }
  puVar2 = FUN_0045bd60((int *)((int)this + 0x728));
  puVar2[8] = param_8;
  puVar2[9] = param_9;
  local_4 = puVar2;
  if (param_6 == '\0') {
    puVar2[0xd] = param_1;
  }
  else {
    puVar3 = operator_new(uVar9);
    puVar2[0xd] = puVar3;
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  puVar2[0xc] = param_2;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined2 *)puVar2 = *(undefined2 *)((int)this + 0xb4);
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar2[7] = 0;
  iVar4 = FUN_0045b1f0(this,(int)puVar2);
  iVar4 = param_7 - (iVar4 + 7 >> 3);
  iVar8 = iVar4 + -0x1c;
  cVar1 = FUN_00463810((int)this + 0x484);
  if (cVar1 != '\0') {
    iVar8 = iVar4 + -0x24;
  }
  if ((int)uVar9 <= iVar8) {
    *(int *)((int)this + 0x38c) = *(int *)((int)this + 0x38c) + 1;
  }
  else {
    *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + 1;
  }
  *(short *)((int)this + 0xb4) = *(short *)((int)this + 0xb4) + 1;
  iVar4 = puVar2[3];
  if ((iVar4 == 10) || (iVar4 == 7)) {
    *(byte *)(puVar2 + 4) = param_5;
    iVar4 = (uint)param_5 * 2 + 0x214;
  }
  else {
    if (iVar4 != 9) goto LAB_0045d3f4;
    *(byte *)(puVar2 + 4) = param_5;
    iVar4 = (uint)param_5 * 2 + 0x1d4;
  }
  psVar5 = (short *)((int)this + iVar4);
  *(short *)((int)puVar2 + 0x12) = *psVar5;
  *psVar5 = *psVar5 + 1;
LAB_0045d3f4:
  if ((int)uVar9 <= iVar8) {
    uVar6 = FUN_0044e2a0((void *)(puVar2[2] * 0x10 + 0x68 + (int)this),&local_4);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  uVar6 = FUN_0045c120(this,puVar2,param_7);
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


/* END FUNCTION 0x0045d290 */

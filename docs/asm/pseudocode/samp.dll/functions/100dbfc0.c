/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbfc0
 * Name: FUN_100dbfc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100dbfc0(int *param_1,int param_2,int *param_3,SOCKET *param_4)

{
  int iVar1;
  code *pcVar2;
  SOCKET SVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int local_90 [36];
  
  iVar1 = *param_1;
  if (param_3 == (int *)0x0) {
    param_3 = local_90;
  }
  *param_3 = *(int *)(param_2 + 4);
  param_3[1] = param_1[0x25];
  iVar4 = 0x11;
  if (param_1[0x25] != 2) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  param_3[2] = iVar4;
  uVar6 = *(uint *)(param_2 + 0x10);
  param_3[3] = uVar6;
  if (0x80 < uVar6) {
    param_3[3] = 0x80;
  }
  uVar6 = param_3[3];
  piVar7 = *(int **)(param_2 + 0x18);
  piVar8 = param_3 + 4;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)piVar8 = (char)*piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  pcVar2 = *(code **)(iVar1 + 0x1d0);
  if (pcVar2 == (code *)0x0) {
    SVar3 = socket(*param_3,param_3[1],param_3[2]);
  }
  else {
    SVar3 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x1d4),0,param_3);
  }
  *param_4 = SVar3;
  return (*param_4 != 0xffffffff) - 1U & 7;
}


/* END FUNCTION 0x100dbfc0 */

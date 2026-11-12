/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a720
 * Name: FUN_1006a720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1006a720(int *param_1,char param_2,undefined4 param_3,char param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  double dVar9;
  float local_90;
  char local_88 [68];
  char local_44 [68];
  
  uVar4 = FUN_1006a610();
  if (uVar4 == 0xffffffff) {
    piVar5 = _calloc(1,0x12);
    *(char *)(piVar5 + 1) = param_2;
    *(undefined4 *)((int)piVar5 + 5) = param_3;
    *(char *)((int)piVar5 + 9) = param_4;
    *(int *)((int)piVar5 + 10) = param_5;
    *(undefined4 *)((int)piVar5 + 0xe) = param_6;
    if (param_2 == '\x01') {
      pcVar7 = "Model";
    }
    else {
      pcVar7 = "Texture";
    }
    __snprintf(local_88,0x40,pcVar7);
    FUN_1008a270(local_88,0xffffffff,0xffffffff);
    *piVar5 = param_1[1];
    FUN_1006a650();
    __snprintf(local_88,0x40,"0x%X");
    FUN_10088880(*piVar5,0,local_88);
    FUN_1008a470();
    iVar6 = FUN_1008a440();
    *(undefined1 *)(iVar6 + 0x29d) = 1;
    iVar6 = param_5;
  }
  else {
    if (uVar4 < (uint)param_1[1]) {
      piVar5 = *(int **)(*param_1 + uVar4 * 4);
    }
    else {
      piVar5 = (int *)0x0;
    }
    *(char *)((int)piVar5 + 9) = param_4;
    iVar6 = param_5 - *(int *)((int)piVar5 + 10);
    *(int *)((int)piVar5 + 10) = param_5;
  }
  local_90 = 0.0;
  if ((param_5 != 0) && (iVar2 = *(int *)((int)piVar5 + 0xe), iVar2 != 0)) {
    fVar3 = (float)param_5;
    if (param_5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    local_90 = (float)iVar2;
    if (iVar2 < 0) {
      local_90 = local_90 + 4.2949673e+09;
    }
    local_90 = (fVar3 * 100.0) / local_90;
  }
  param_1[0x96] = param_1[0x96] + iVar6;
  iVar6 = FUN_1002e2b0();
  if (1000 < iVar6 - param_1[0x95]) {
    iVar6 = FUN_1002e2b0();
    param_1[0x95] = iVar6;
    iVar6 = param_1[0x96];
    param_1[0x97] = 0;
    if (iVar6 != 0) {
      fVar3 = (float)iVar6;
      if (iVar6 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      param_1[0x97] = (int)(fVar3 * 0.0009765625);
    }
    param_1[0x96] = 0;
  }
  if (param_4 == '\0') {
    __snprintf(local_88,0x40,"0%%");
    goto LAB_1006a990;
  }
  if (param_4 == '\x01') {
    dVar9 = (double)local_90;
    pcVar7 = "%.0f%%";
  }
  else if (param_4 == '\x03') {
    if (param_8 == 0) {
      __snprintf(local_88,0x40,"{CC8888}Error(%d) %d/%d",param_7,*(undefined4 *)((int)piVar5 + 10),
                 *(undefined4 *)((int)piVar5 + 0xe));
      goto LAB_1006a990;
    }
    dVar9 = (double)CONCAT44(param_8,param_7);
    pcVar7 = "{CC8888}(%d) %.16s..";
  }
  else {
    if (param_4 != '\x04') goto LAB_1006a990;
    dVar9 = (double)local_90;
    pcVar7 = "{77AA77}%.0f%%";
    param_1[0x93] = param_1[0x93] + 1;
  }
  __snprintf(local_88,0x40,pcVar7,dVar9);
LAB_1006a990:
  FUN_10088880(*piVar5,1,local_88);
  if (0 < param_1[0x94]) {
    __snprintf(local_44,0x40,"Updating models.. [%d/%d] (%.2f KB/s)",param_1[0x93],param_1[0x94],
               (double)(float)param_1[0x97]);
    pcVar7 = local_44;
    pcVar8 = (char *)(param_1[10] + 0x16);
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


/* END FUNCTION 0x1006a720 */

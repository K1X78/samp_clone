/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f9e0
 * Name: FUN_0048f9e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048f9e0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte abStack_232 [282];
  byte abStack_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b193b;
  local_14 = ExceptionList;
  if (DAT_004fc438 == 0) {
    return;
  }
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  ExceptionList = &local_14;
  uVar2 = FUN_0044eec0(&param_3,(int *)&DAT_004ea838);
  if ((char)uVar2 != '\0') {
    ExceptionList = local_14;
    return;
  }
  FUN_0044d930(abStack_232 + 2,param_1,param_2,'\0');
  abStack_232[1] = 0;
  local_c = 0;
  iVar3 = (**(code **)(*DAT_0051c18c + 0x90))(param_3,param_4);
  if (iVar3 != 0) {
    pbVar7 = abStack_118;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    abStack_232[0] = 0;
    FUN_0044da70(abStack_232 + 2,abStack_232 + 1,8,'\x01');
    FUN_0044da70(abStack_232 + 2,abStack_232,8,'\x01');
    FUN_0044de00(abStack_232 + 2,abStack_118,(uint)abStack_232[0]);
    iVar6 = 4;
    bVar8 = true;
    pbVar7 = abStack_118;
    pbVar5 = &DAT_004bf21c;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pbVar7 == *pbVar5;
      pbVar7 = pbVar7 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    if (bVar8) {
      iVar6 = FUN_00490c80(DAT_004fc43c,"maxnpc");
      if ((*(int *)(DAT_004fc438 + 8) != 0) &&
         (iVar4 = FUN_00465fe0(*(int *)(DAT_004fc438 + 8)), iVar4 < iVar6)) {
        *(undefined1 *)(iVar3 + 0xcb5) = 2;
        FUN_0048f8a0(iVar3);
        goto LAB_0048fb92;
      }
    }
    else {
      pbVar7 = abStack_118;
      pbVar5 = &DAT_004e4858 + (uint)*(byte *)(iVar3 + 0xcb4) * 0x60;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0048fb66:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0048fb6b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0048fb66;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0048fb6b:
      if (iVar6 == 0) {
        *(undefined1 *)(iVar3 + 0xcb5) = 1;
        FUN_0048f8a0(iVar3);
        goto LAB_0048fb92;
      }
      *(undefined1 *)(iVar3 + 0xcb5) = 0;
    }
    *(undefined4 *)(iVar3 + 0xcb0) = 2;
  }
LAB_0048fb92:
  local_c = 0xffffffff;
  FUN_0044d9b0((int)(abStack_232 + 2));
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x0048f9e0 */

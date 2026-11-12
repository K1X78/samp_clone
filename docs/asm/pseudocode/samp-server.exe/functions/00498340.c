/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00498340
 * Name: FUN_00498340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00498340(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *local_238;
  void *pvStack_234;
  byte local_230 [256];
  undefined1 local_130 [284];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1c2b;
  local_14 = ExceptionList;
  local_238 = (undefined4 *)*param_1;
  iVar6 = param_1[1];
  if ((local_238 != (undefined4 *)0x0) && (iVar6 != 0)) {
    uVar2 = param_1[2];
    uVar1 = *(undefined2 *)(param_1 + 3);
    pbVar10 = local_230;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10 = pbVar10 + 4;
    }
    pvVar7 = (void *)DAT_004fc438[2];
    ExceptionList = &local_14;
    FUN_0044d930(local_130,local_238,((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 1,'\0');
    local_c = 0;
    FUN_0044da70(local_130,(byte *)&local_238,8,'\x01');
    if ((byte)local_238 < 0x81) {
      FUN_0044de00(local_130,local_230,(uint)local_238 & 0xff);
      local_230[(uint)local_238 & 0xff] = 0;
      uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,uVar1);
      if ((uVar4 < 1000) && (*(int *)((int)pvVar7 + (uint)uVar4 * 4 + 0x24de4) != 0)) {
        uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,uVar1);
        uVar5 = FUN_00466120(pvVar7,uVar4);
        if ((char)uVar5 != '\0') {
          FUN_004690d0((char *)local_230);
          if (DAT_004fc43c != (void *)0x0) {
            iVar6 = FUN_00490c80(DAT_004fc43c,"chatlogging");
            if (iVar6 != 0) {
              uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,uVar1,local_230);
              FUN_00465c30(pvVar7,uVar4);
              FUN_00491fa0("[chat] [%s]: %s");
            }
          }
          uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,uVar1);
          puVar3 = DAT_004fc438;
          pvVar7 = (void *)FUN_00463d80((void *)DAT_004fc438[2],uVar4);
          pvStack_234 = (void *)*puVar3;
          if (pvVar7 != (void *)0x0) {
            uVar8 = FUN_0046b200((void *)puVar3[1],(uint *)(uint)uVar4,(short *)local_230);
            if (uVar8 != 0) {
              if (pvStack_234 == (void *)0x0) {
                FUN_00484eb0(pvVar7,local_230,(byte)local_238);
              }
              else {
                FUN_0046de60(pvStack_234,(uint *)(uint)uVar4,local_230);
              }
            }
          }
        }
      }
    }
    local_c = 0xffffffff;
    FUN_0044d9b0((int)local_130);
  }
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x00498340 */

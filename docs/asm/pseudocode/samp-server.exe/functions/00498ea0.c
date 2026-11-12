/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00498ea0
 * Name: FUN_00498ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00498ea0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_23c [2];
  undefined2 local_234;
  byte local_230;
  undefined4 local_22f;
  undefined1 local_130 [284];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1c2b;
  local_14 = ExceptionList;
  iVar8 = param_1[1];
  puVar2 = (undefined4 *)*param_1;
  if ((puVar2 != (undefined4 *)0x0) && (iVar8 != 0)) {
    uVar4 = param_1[2];
    local_234 = *(undefined2 *)(param_1 + 3);
    local_230 = 0;
    puVar10 = &local_22f;
    for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    local_23c[0] = 0;
    ExceptionList = &local_14;
    FUN_0044d930(local_130,puVar2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + 1,'\0');
    local_c = 0;
    if (*(int *)((int)DAT_004fc438 + 0x5e) == 1) {
      uVar3 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar4,local_234);
      if ((uVar3 < 1000) &&
         (uVar9 = (uint)uVar3, *(int *)((int)DAT_004fc438[2] + uVar9 * 4 + 0x24de4) != 0)) {
        uVar4 = FUN_00466120((void *)DAT_004fc438[2],uVar3);
        if (((char)uVar4 != '\0') &&
           ((FUN_0044da70(local_130,(byte *)local_23c,0x20,'\x01'), 1 < (int)local_23c[0] &&
            ((int)local_23c[0] < 0x100)))) {
          pbVar5 = &local_230;
          for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
            pbVar5[0] = 0;
            pbVar5[1] = 0;
            pbVar5[2] = 0;
            pbVar5[3] = 0;
            pbVar5 = pbVar5 + 4;
          }
          FUN_0044de00(local_130,&local_230,local_23c[0]);
          (&local_230)[local_23c[0]] = 0;
          FUN_004690d0((char *)&local_230);
          pbVar5 = &local_230;
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
          if ((((1 < (uint)((int)pbVar5 - (int)&local_22f)) &&
               (uVar6 = FUN_0046b2d0((void *)DAT_004fc438[1],uVar9,(short *)&local_230), uVar6 == 0)
               ) && ((void *)*DAT_004fc438 != (void *)0x0)) &&
             (iVar8 = FUN_0046df60((void *)*DAT_004fc438,uVar9,(short *)&local_230), iVar8 == 0)) {
            FUN_00495ae0(DAT_004fc438,uVar3,0xffffffff,"SERVER: Unknown command.");
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


/* END FUNCTION 0x00498ea0 */

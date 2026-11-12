/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043ae00
 * Name: FUN_0043ae00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0043ae00(int param_1,uint *param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_c;
  uint local_8;
  uint *local_4;
  
  local_c = -1;
  puVar5 = (uint *)FUN_00413460(param_1);
  uVar9 = ((int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3) + 1;
  puVar6 = (undefined4 *)FUN_0043aa50(uVar9);
  puVar7 = (uint *)FUN_0043aa50(0x200);
  local_4 = puVar7;
  if (((puVar5 != (uint *)0x0) && (puVar6 != (undefined4 *)0x0)) && (puVar7 != (uint *)0x0)) {
    puVar11 = puVar6;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_00413480((uint *)0x0,1);
    FUN_00409f30(1,puVar7);
    iVar10 = 0;
    uVar9 = *param_2;
    while (uVar9 != 0) {
      if (((int)uVar9 < 1) || ((2 < (int)uVar9 && (uVar9 != 5)))) {
        iVar12 = 2;
        FUN_00412de0(4,(undefined1 *)&local_8);
      }
      else {
        iVar12 = 4;
        local_8 = param_2[iVar10 + 2] - 1;
        param_2[iVar10 + 2] = param_2[iVar10 + 3] + param_2[iVar10 + 2];
      }
      uVar8 = param_2[iVar10 + 1];
      param_2[iVar10 + 1] = uVar8 - 1;
      if (0 < (int)(uVar8 - 1)) {
        iVar12 = 0;
      }
      local_8 = (uint)((longlong)(ulonglong)(local_8 & 0x7fffffff) % (longlong)param_1);
      iVar10 = iVar10 + iVar12;
      if ((uVar9 & 1) == 0) {
        iVar12 = local_8 + 1;
        *(byte *)((iVar12 >> 3) + (int)puVar6) =
             *(byte *)((iVar12 >> 3) + (int)puVar6) & ~('\x01' << ((byte)iVar12 & 7));
        FUN_00409f30(iVar12,local_4);
      }
      else {
        iVar12 = local_8 + 1;
        pbVar1 = (byte *)((iVar12 >> 3) + (int)puVar6);
        *pbVar1 = *pbVar1 | '\x01' << ((byte)iVar12 & 7);
        if ((uVar9 != 5) && (uVar9 = FUN_00413480(puVar5,iVar12), uVar9 != 0)) goto LAB_0043b001;
      }
      uVar9 = param_2[iVar10];
    }
    bVar2 = FUN_00409e90(puVar5);
    bVar3 = FUN_00409e90(puVar5);
    iVar10 = FUN_0040b9a0();
    bVar4 = FUN_00409e90((uint *)0x0);
    iVar10 = (CONCAT31(extraout_var,bVar2) - param_1) + CONCAT31(extraout_var_00,bVar3) + iVar10 +
             CONCAT31(extraout_var_01,bVar4);
    iVar12 = 1;
    local_c = iVar10;
    if (0 < param_1) {
      do {
        bVar2 = FUN_00409e90(puVar5);
        local_c = iVar12;
        if ((uint)(((byte)(1 << ((byte)iVar12 & 7)) & *(byte *)((iVar12 >> 3) + (int)puVar6)) != 0)
            != CONCAT31(extraout_var_02,bVar2)) break;
        iVar12 = iVar12 + 1;
        local_c = iVar10;
      } while (iVar12 <= param_1);
    }
  }
LAB_0043b001:
  FUN_004080d0((int)local_4);
  FUN_004080d0((int)puVar6);
  FUN_0040a000((int)puVar5);
  return local_c;
}


/* END FUNCTION 0x0043ae00 */

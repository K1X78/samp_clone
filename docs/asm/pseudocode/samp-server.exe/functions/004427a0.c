/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004427a0
 * Name: FUN_004427a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004427a0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  undefined1 uVar9;
  bool bVar10;
  int local_10;
  int *local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = *param_1;
  local_8 = iVar1;
  local_10 = FUN_0041ad60(param_1,(int *)&local_c);
  if (local_10 < 0) {
    return;
  }
  if (param_2 != 0) {
    if (1 < local_10) {
      FUN_00418b00((undefined **)"temporary table name must be unqualified");
      return;
    }
    local_10 = 1;
  }
  param_1[0x7b] = *local_c;
  param_1[0x7c] = local_c[1];
  pcVar2 = (char *)FUN_00416430();
  if (pcVar2 == (char *)0x0) {
    return;
  }
  iVar3 = FUN_0041add0();
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 0x74) == 1) {
      param_2 = 1;
    }
    iVar3 = local_10 * 0x10;
    local_4 = *(undefined4 *)(iVar3 + *(int *)(iVar1 + 8));
    pcVar8 = "sqlite_temp_master";
    if (param_2 != 1) {
      pcVar8 = "sqlite_master";
    }
    iVar4 = FUN_0041ab60(0x12,pcVar8,0,local_4);
    if (iVar4 == 0) {
      if (param_3 == 0) {
        iVar4 = (uint)(param_2 != 0) * 2 + 2;
      }
      else {
        iVar4 = (uint)(param_2 == 0) * 2 + 6;
      }
      if ((param_4 != 0) || (iVar4 = FUN_0041ab60(iVar4,pcVar2,0,local_4), iVar4 == 0)) {
        if ((char)param_1[0x85] != '\0') {
LAB_00442950:
          puVar6 = FUN_00417b70();
          if (puVar6 == (undefined4 *)0x0) {
            *(undefined1 *)(iVar1 + 0x1e) = 1;
            param_1[1] = 7;
            param_1[0x10] = param_1[0x10] + 1;
            FUN_00408130(iVar1);
            return;
          }
          puVar6[1] = pcVar2;
          puVar6[2] = 0xffffffff;
          puVar6[0x11] = *(undefined4 *)(iVar3 + 0xc + *(int *)(iVar1 + 8));
          *(undefined2 *)(puVar6 + 8) = 1;
          *puVar6 = 0;
          param_1[0x80] = (int)puVar6;
          if (*(char *)((int)param_1 + 0x13) == '\0') {
            iVar3 = 0x10;
            bVar10 = true;
            pcVar8 = "sqlite_sequence";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar10 = *pcVar2 == *pcVar8;
              pcVar2 = pcVar2 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar10);
            if (bVar10) {
              *(undefined4 **)(puVar6[0x11] + 0x44) = puVar6;
            }
          }
          if ((*(char *)(iVar1 + 0x7c) == '\0') &&
             (pvVar7 = (void *)FUN_0041c720(), pvVar7 != (void *)0x0)) {
            FUN_0042cdb0((byte)local_10,0);
            if (param_4 != 0) {
              FUN_00414e30();
            }
            iVar1 = param_1[0x12];
            param_1[0x67] = iVar1 + 2;
            iVar3 = iVar1 + 3;
            param_1[0x66] = iVar1 + 1;
            param_1[0x12] = iVar3;
            FUN_00414dd0(0x23,local_10,iVar3,2);
            FUN_0040d720(local_10);
            local_4 = FUN_00414e50(0x1a);
            FUN_00414e70((-(uint)((*(uint *)(local_8 + 0xc) & 0x100000) != 0) & 0xfffffffd) + 4,7);
            FUN_00414dd0(0x24,local_10,2,iVar3);
            FUN_00414e70((uint)*(byte *)(*(int *)(*(int *)(local_8 + 8) + 0xc) + 0x49),7);
            FUN_00414dd0(0x24,local_10,5,iVar3);
            FUN_0040d680(pvVar7);
            if ((param_3 == 0) && (param_4 == 0)) {
              uVar9 = 0x62;
            }
            else {
              local_10 = 0;
              uVar9 = 7;
            }
            FUN_00414e70(local_10,uVar9);
            FUN_00420b90();
            FUN_00414e70(0,0x36);
            FUN_00414e70(0,10);
            FUN_00414dd0(0x37,0,iVar3,iVar1 + 1);
            FUN_0040d660(extraout_ECX,8);
            FUN_00414e30();
          }
          return;
        }
        uVar5 = FUN_00442130();
        if (uVar5 == 0) {
          iVar4 = FUN_0040edd0(iVar1,pcVar2,*(byte **)(iVar3 + *(int *)(iVar1 + 8)));
          if (iVar4 == 0) {
            iVar4 = FUN_0040ee60(pcVar2,(byte *)0x0);
            if ((iVar4 == 0) || ((local_10 != 0 && (*(char *)(iVar1 + 0x7c) != '\0'))))
            goto LAB_00442950;
            pcVar2 = "there is already an index named %s";
          }
          else {
            if (param_5 != 0) goto LAB_00442912;
            pcVar2 = "table %T already exists";
          }
          FUN_00418b00((undefined **)pcVar2);
        }
      }
    }
  }
LAB_00442912:
  FUN_00408130(iVar1);
  return;
}


/* END FUNCTION 0x004427a0 */

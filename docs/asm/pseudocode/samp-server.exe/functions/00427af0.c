/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427af0
 * Name: FUN_00427af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00427af0(undefined4 *param_1)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int *local_4;
  
  local_14 = 0;
  iVar4 = FUN_00426120((int *)*param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_004238d0((void *)0x1,&local_18), iVar8 = local_18, iVar4 == 0)) {
    uVar5 = FUN_00408f80();
    local_10 = uVar5;
    local_8 = uVar5;
    local_1c = FUN_00414010(&local_14);
    if (local_1c != 0) goto LAB_00427c9e;
    if ((uVar5 == 0) ||
       (iVar4 = *(int *)(iVar8 + 0x40), *(int *)(iVar4 + 0x18) != *(int *)(iVar4 + 0x5c))) {
      local_10 = local_14;
    }
    if (0 < (int)local_10) {
      piVar1 = *(int **)(iVar8 + 0x40);
      iVar4 = 4;
      bVar11 = true;
      piVar6 = piVar1;
      piVar9 = (int *)"SQLite format 3";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *piVar6 == *piVar9;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (bVar11);
      local_1c = 0x1a;
      local_4 = piVar1;
      if (!bVar11) {
LAB_00427c9e:
        FUN_00427610();
        param_1[3] = 0;
        return local_1c;
      }
      if (2 < *(byte *)((int)piVar1 + 0x12)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      if (2 < *(byte *)((int)piVar1 + 0x13)) goto LAB_00427c9e;
      if ((*(byte *)((int)piVar1 + 0x13) == 2) && (*(char *)((int)param_1 + 0x23) == '\0')) {
        local_c = 0;
        local_1c = FUN_00419550(&local_c);
        if (local_1c != 0) goto LAB_00427c9e;
        if (local_c == 0) {
          FUN_00427610();
          return 0;
        }
      }
      local_1c = 0x1a;
      iVar4 = 3;
      bVar11 = true;
      pcVar7 = (char *)((int)piVar1 + 0x15);
      pcVar10 = "@  ";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar7 == *pcVar10;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar11);
      if (!bVar11) goto LAB_00427c9e;
      uVar2 = CONCAT11((char)piVar1[4],*(undefined1 *)((int)piVar1 + 0x11));
      uVar5 = (uint)uVar2;
      if (((uVar5 & uVar5 - 1) != 0) || (uVar2 < 0x200)) goto LAB_00427c9e;
      iVar4 = uVar5 - *(byte *)(piVar1 + 5);
      if (uVar5 != *(ushort *)((int)param_1 + 0x16)) {
        FUN_00427610();
        *(short *)(param_1 + 6) = (short)iVar4;
        *(ushort *)((int)param_1 + 0x16) = uVar2;
        FUN_0040cb30();
        iVar4 = FUN_00413f50((undefined2 *)((int)param_1 + 0x16),uVar5 - iVar4);
        return iVar4;
      }
      if ((int)local_14 < (int)local_8) {
        local_1c = FUN_0041d790();
        goto LAB_00427c9e;
      }
      if (iVar4 < 0x1e0) goto LAB_00427c9e;
      *(ushort *)((int)param_1 + 0x16) = uVar2;
      *(short *)(param_1 + 6) = (short)iVar4;
      iVar4 = FUN_00408f80();
      *(bool *)(param_1 + 5) = iVar4 != 0;
      iVar4 = FUN_00408f80();
      *(bool *)((int)param_1 + 0x15) = iVar4 != 0;
    }
    iVar4 = *(ushort *)(param_1 + 6) - 0xc;
    iVar8 = iVar4 * 0x40;
    iVar4 = iVar4 * 0x20;
    *(short *)((int)param_1 + 0x1a) =
         ((short)(iVar8 / 0xff) + (short)(iVar8 >> 0x1f) + -0x17) -
         (short)((longlong)iVar8 * 0x80808081 >> 0x3f);
    sVar3 = ((short)(iVar4 / 0xff) + (short)(iVar4 >> 0x1f) + -0x17) -
            (short)((longlong)iVar4 * 0x80808081 >> 0x3f);
    *(short *)(param_1 + 7) = sVar3;
    *(short *)(param_1 + 8) = sVar3;
    *(ushort *)((int)param_1 + 0x1e) = *(ushort *)(param_1 + 6) - 0x23;
    param_1[3] = local_18;
    param_1[10] = local_10;
    iVar4 = 0;
  }
  return iVar4;
}


/* END FUNCTION 0x00427af0 */

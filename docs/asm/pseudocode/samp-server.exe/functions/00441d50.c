/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00441d50
 * Name: FUN_00441d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00441d50(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int in_EAX;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int *extraout_ECX;
  int iVar12;
  char **ppcVar13;
  char *pcVar14;
  int local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  uint local_4;
  
  bVar4 = false;
  if (param_1 == 1) {
    pcVar14 = "sqlite_temp_master";
    local_c = 
    "CREATE TEMP TABLE sqlite_temp_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
  }
  else {
    pcVar14 = "sqlite_master";
    local_c = 
    "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
    ;
  }
  local_10 = &DAT_004b69f8;
  local_8 = 0;
  local_20 = param_1;
  local_18 = 0;
  local_1c = param_2;
  local_14 = pcVar14;
  FUN_00438640(&local_24,3,&local_14);
  if (local_18 != 0) goto LAB_0044204e;
  iVar12 = param_1 * 0x10;
  iVar7 = FUN_0040edd0(in_EAX,pcVar14,*(byte **)(*(int *)(in_EAX + 8) + iVar12));
  if (iVar7 != 0) {
    *(byte *)(iVar7 + 0x22) = *(byte *)(iVar7 + 0x22) | 1;
  }
  iVar7 = *(int *)(in_EAX + 8);
  if (*(int *)(iVar7 + 4 + iVar12) == 0) {
    if (param_1 == 1) {
      puVar1 = (ushort *)(*(int *)(iVar7 + 0x1c) + 0x4a);
      *puVar1 = *puVar1 | 1;
    }
    return 0;
  }
  FUN_0040c2c0();
  bVar5 = FUN_0040d070(*(int *)(iVar7 + 4 + iVar12));
  if (CONCAT31(extraout_var,bVar5) == 0) {
    uVar8 = FUN_00427d80(extraout_ECX,0);
    if (uVar8 == 0) {
      bVar4 = true;
      goto LAB_00441e71;
    }
    FUN_00411540();
    FUN_0041db50((undefined **)&DAT_004b23ac);
  }
  else {
LAB_00441e71:
    iVar9 = 0;
    ppcVar13 = &local_14;
    do {
      iVar9 = iVar9 + 1;
      FUN_0040cff0(iVar9,ppcVar13);
      ppcVar13 = ppcVar13 + 1;
    } while (iVar9 < 5);
    piVar2 = (int *)(iVar7 + 0xc + iVar12);
    **(undefined4 **)(iVar7 + 0xc + iVar12) = local_14;
    if (local_4 == 0) {
      pbVar11 = (byte *)(*(int *)(*(int *)(in_EAX + 8) + 0xc + iVar12) + 0x4a);
      *pbVar11 = *pbVar11 | 4;
LAB_00441efd:
      *(undefined1 *)(*piVar2 + 0x49) = *(undefined1 *)(*(int *)(*(int *)(in_EAX + 8) + 0xc) + 0x49)
      ;
      if (*(int *)(*piVar2 + 0x4c) == 0) {
        if (local_c == (char *)0x0) {
          pcVar14 = (char *)0x7d0;
        }
        else {
          pcVar14 = local_c;
          if ((int)local_c < 0) {
            pcVar14 = (char *)-(int)local_c;
          }
        }
        *(char **)(*piVar2 + 0x4c) = pcVar14;
        FUN_0040cb50(*(undefined4 *)(*piVar2 + 0x4c));
      }
      *(char *)(*piVar2 + 0x48) = (char)local_10;
      if (*(char *)(*piVar2 + 0x48) == '\0') {
        *(undefined1 *)(*piVar2 + 0x48) = 1;
      }
      if (4 < *(byte *)(*piVar2 + 0x48)) {
        pcVar14 = "unsupported file format";
        goto LAB_00441f65;
      }
      if ((param_1 == 0) && (3 < (int)local_10)) {
        *(uint *)(in_EAX + 0xc) = *(uint *)(in_EAX + 0xc) & 0xffefffff;
      }
      pbVar11 = (byte *)FUN_00418920((undefined **)
                                     "SELECT name, rootpage, sql FROM \'%q\'.%s ORDER BY rowid");
      uVar3 = *(undefined4 *)(in_EAX + 0x100);
      *(undefined4 *)(in_EAX + 0x100) = 0;
      uVar8 = FUN_00441a30(in_EAX,pbVar11,FUN_00438640,&local_24,(int *)0x0);
      *(undefined4 *)(in_EAX + 0x100) = uVar3;
      if (uVar8 == 0) {
        uVar8 = local_18;
      }
      FUN_00408130(in_EAX);
      if (uVar8 == 0) {
        FUN_0041a850(in_EAX);
      }
      if (*(char *)(in_EAX + 0x1e) == '\0') {
        if (uVar8 != 0) goto LAB_00442016;
LAB_0044201f:
        pbVar11 = (byte *)(*(int *)(*(int *)(in_EAX + 8) + 0xc + iVar12) + 0x4a);
        *pbVar11 = *pbVar11 | 1;
        uVar8 = 0;
      }
      else {
        uVar8 = 7;
        FUN_00420a50(0);
LAB_00442016:
        if ((*(uint *)(in_EAX + 0xc) & 0x800000) != 0) goto LAB_0044201f;
      }
    }
    else {
      if (param_1 == 0) {
        bVar6 = (byte)local_4 & 3;
        if ((local_4 & 3) == 0) {
          bVar6 = 1;
        }
        *(byte *)(*(int *)(*(int *)(in_EAX + 8) + 0xc) + 0x49) = bVar6;
        piVar10 = FUN_0041b6e0(in_EAX,0,1);
        *(int **)(in_EAX + 0x2c) = piVar10;
        goto LAB_00441efd;
      }
      if (local_4 == *(byte *)(*(int *)(*(int *)(in_EAX + 8) + 0xc) + 0x49)) goto LAB_00441efd;
      pcVar14 = "attached databases must use the same text encoding as main database";
LAB_00441f65:
      FUN_0041db50((undefined **)pcVar14);
      uVar8 = 1;
    }
    if (bVar4) {
      FUN_0042ace0();
    }
  }
  FUN_0040c340();
  local_18 = uVar8;
LAB_0044204e:
  if ((local_18 == 7) || (local_18 == 0xc0a)) {
    *(undefined1 *)(in_EAX + 0x1e) = 1;
  }
  return local_18;
}


/* END FUNCTION 0x00441d50 */

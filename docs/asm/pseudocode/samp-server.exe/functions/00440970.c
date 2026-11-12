/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00440970
 * Name: FUN_00440970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00440970(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = param_2;
  if ((param_1[3] == 0) && (param_3 != 0)) {
    iVar2 = param_2 * 2;
  }
  if (param_1[2] < param_1[5] + iVar2) {
    iVar2 = iVar2 + param_1[2] * 2;
    param_1[2] = iVar2;
    iVar2 = FUN_004128e0(*param_1,iVar2 * 4);
    if (iVar2 == 0) {
LAB_00440aaa:
      param_1[6] = 7;
      return 1;
    }
    *param_1 = iVar2;
  }
  if (param_1[3] == 0) {
    iVar2 = 0;
    param_1[4] = param_2;
    if (0 < param_2) {
      do {
        iVar3 = FUN_004189d0((undefined **)&DAT_004b23ac);
        if (iVar3 == 0) goto LAB_00440aaa;
        *(int *)(*param_1 + param_1[5] * 4) = iVar3;
        iVar2 = iVar2 + 1;
        param_1[5] = param_1[5] + 1;
      } while (iVar2 < param_2);
    }
  }
  else if (param_1[4] != param_2) {
    FUN_004080d0(param_1[1]);
    iVar2 = FUN_004189d0((undefined **)
                         "sqlite3_get_table() called with two or more incompatible queries");
    param_1[1] = iVar2;
    param_1[6] = 1;
    return 1;
  }
  if (param_3 != 0) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        pcVar1 = *(char **)(param_3 + iVar2 * 4);
        if (pcVar1 == (char *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar5 = FUN_00408380(pcVar1);
          uVar5 = uVar5 + 1;
          puVar4 = (undefined4 *)FUN_0043aa50(uVar5);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00440aaa;
          puVar7 = *(undefined4 **)(param_3 + iVar2 * 4);
          puVar8 = puVar4;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
        *(undefined4 **)(*param_1 + param_1[5] * 4) = puVar4;
        iVar2 = iVar2 + 1;
        param_1[5] = param_1[5] + 1;
      } while (iVar2 < param_2);
    }
    param_1[3] = param_1[3] + 1;
  }
  return 0;
}


/* END FUNCTION 0x00440970 */

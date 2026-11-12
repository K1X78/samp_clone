/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041af90
 * Name: FUN_0041af90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_0041af90(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint local_1c;
  undefined **local_18;
  int local_14;
  undefined **local_10;
  int local_c;
  int local_8;
  undefined *local_4;
  
  iVar8 = *(int *)(param_2 + 0xc);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  iVar6 = 0;
  iVar1 = iVar8;
  if (0 < iVar8) {
    do {
      local_14 = iVar1;
      iVar1 = FUN_0040f070((char *)*puVar5);
      iVar6 = iVar6 + 5 + iVar1;
      puVar5 = puVar5 + 6;
      local_14 = local_14 + -1;
      iVar1 = local_14;
    } while (local_14 != 0);
  }
  iVar1 = FUN_0040f070(*(char **)(param_2 + 4));
  if (iVar6 + iVar1 < 0x32) {
    local_18 = (undefined **)&DAT_004b6404;
    local_10 = (undefined **)&DAT_004b7050;
    local_4 = &DAT_004b704c;
  }
  else {
    local_18 = (undefined **)&DAT_004b7048;
    local_10 = (undefined **)&DAT_004b7040;
    local_4 = &DAT_004b703c;
  }
  iVar6 = iVar6 + iVar1 + 0x23 + iVar8 * 6;
  local_8 = iVar6;
  pcVar2 = (char *)FUN_004125b0(iVar6);
  if (pcVar2 != (char *)0x0) {
    FUN_004189f0(iVar6,pcVar2,(undefined **)"CREATE TABLE ");
    local_1c = FUN_00408380(pcVar2);
    FUN_00416510((int)pcVar2,(int *)&local_1c);
    pcVar2[local_1c] = '(';
    iVar8 = *(int *)(param_2 + 0x10);
    iVar1 = local_1c + 1;
    local_c = 0;
    local_14 = iVar8;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        local_14 = iVar8;
        FUN_004189f0(local_8 - iVar1,pcVar2 + iVar1,local_18);
        local_1c = FUN_00408380(pcVar2 + iVar1);
        local_1c = iVar1 + local_1c;
        local_18 = local_10;
        FUN_00416510((int)pcVar2,(int *)&local_1c);
        pcVar7 = *(char **)(&DAT_004b2fa0 + *(char *)(iVar8 + 0x16) * 4);
        uVar3 = FUN_00408380(pcVar7);
        pcVar9 = pcVar2 + local_1c;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        iVar1 = local_1c + uVar3;
        local_c = local_c + 1;
        iVar8 = local_14 + 0x18;
        iVar6 = local_8;
        local_14 = iVar8;
      } while (local_c < *(int *)(param_2 + 0xc));
    }
    FUN_004189f0(iVar6 - iVar1,pcVar2 + iVar1,(undefined **)&DAT_004b23ac);
    return pcVar2;
  }
  *(undefined1 *)(param_1 + 0x1e) = 1;
  return (char *)0x0;
}


/* END FUNCTION 0x0041af90 */

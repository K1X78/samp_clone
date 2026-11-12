/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421b70
 * Name: FUN_00421b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00421b70(undefined4 *param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int local_20;
  int *local_18;
  int local_10;
  void *local_c;
  int local_8;
  void *local_4;
  
  psVar1 = *(short **)(param_2 + 8);
  local_20 = 0;
  if (*psVar1 != 1 && -1 < *psVar1 + -1) {
    piVar10 = (int *)(psVar1 + 0x2e);
    local_18 = (int *)(psVar1 + 10);
    do {
      iVar9 = piVar10[-4];
      if ((*local_18 != 0) && (iVar9 != 0)) {
        uVar6 = (*(byte *)((int)piVar10 + -7) & 0x20) >> 5;
        if ((*(byte *)((int)piVar10 + -7) & 4) != 0) {
          if ((*piVar10 != 0) || (piVar10[1] != 0)) {
            pcVar11 = "a NATURAL join may not have an ON or USING clause";
LAB_00421daf:
            FUN_00418b00((undefined **)pcVar11);
            return 1;
          }
          iVar8 = 0;
          if (0 < *(int *)(iVar9 + 0xc)) {
            iVar7 = 0;
            do {
              iVar4 = FUN_0040fd50(*(byte **)(*(int *)(iVar9 + 0x10) + iVar7),(int *)&local_c,
                                   &local_10);
              if (iVar4 != 0) {
                FUN_00421b00(local_c,(int)psVar1,(void *)(local_20 + 1),iVar8,uVar6,
                             (undefined4 *)(param_2 + 0xc));
              }
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x18;
            } while (iVar8 < *(int *)(iVar9 + 0xc));
          }
        }
        if (*piVar10 != 0) {
          if (piVar10[1] != 0) {
            FUN_00418b00((undefined **)"cannot have both ON and USING clauses in the same join");
            return 1;
          }
          if (uVar6 != 0) {
            FUN_0040fda0(*piVar10,piVar10[-1]);
          }
          puVar5 = FUN_0041a0d0(*param_1,*(undefined4 **)(param_2 + 0xc));
          *(undefined4 **)(param_2 + 0xc) = puVar5;
          *piVar10 = 0;
        }
        piVar2 = (int *)piVar10[1];
        if ((piVar2 != (int *)0x0) && (iVar9 = 0, 0 < piVar2[1])) {
          do {
            pbVar3 = *(byte **)(*piVar2 + iVar9 * 8);
            iVar8 = FUN_0040fd10(pbVar3);
            if (iVar8 < 0) {
LAB_00421da9:
              pcVar11 = "cannot join using column %s - column not present in both tables";
              goto LAB_00421daf;
            }
            iVar7 = FUN_0040fd50(pbVar3,(int *)&local_4,&local_8);
            if (iVar7 == 0) goto LAB_00421da9;
            FUN_00421b00(local_4,(int)psVar1,(void *)(local_20 + 1),iVar8,uVar6,
                         (undefined4 *)(param_2 + 0xc));
            iVar9 = iVar9 + 1;
          } while (iVar9 < piVar2[1]);
        }
      }
      local_20 = local_20 + 1;
      piVar10 = piVar10 + 0xe;
      local_18 = local_18 + 0xe;
    } while (local_20 < *psVar1 + -1);
  }
  return 0;
}


/* END FUNCTION 0x00421b70 */

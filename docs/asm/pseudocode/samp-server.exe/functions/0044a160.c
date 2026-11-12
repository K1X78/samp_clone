/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044a160
 * Name: FUN_0044a160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044a160(int *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte *extraout_ECX;
  char *local_18;
  
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  local_18 = (char *)0x0;
  if ((*(char *)(iVar1 + 0x1e) == '\0') && (iVar4 = FUN_00442730(), iVar4 != 0)) {
    iVar5 = FUN_0040fc30(*param_1);
    pbVar3 = *(byte **)(iVar5 * 0x10 + *(int *)(iVar1 + 8));
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10000000;
    pcVar6 = (char *)FUN_00416430();
    if (pcVar6 != (char *)0x0) {
      iVar7 = FUN_0040edd0(iVar1,pcVar6,pbVar3);
      if ((iVar7 == 0) && (iVar7 = FUN_0040ee60(pcVar6,pbVar3), iVar7 == 0)) {
        uVar8 = FUN_00408380(*(char **)(iVar4 + 4));
        if (((int)uVar8 < 7) || (iVar7 = FUN_004084a0(extraout_ECX,(byte *)"sqlite_",7), iVar7 != 0)
           ) {
          iVar7 = FUN_0041add0();
          if (iVar7 != 0) goto LAB_0044a49e;
          if (*(int *)(iVar4 + 0x1c) == 0) {
            iVar7 = FUN_0041ab60(0x1a,pbVar3,*(undefined4 *)(iVar4 + 4),0);
            if ((iVar7 == 0) && (iVar7 = FUN_00446950(param_1,iVar4), iVar7 == 0)) {
              if (((*(byte *)(iVar4 + 0x22) & 0x10) != 0) &&
                 (local_18 = (char *)FUN_004103b0(iVar1),
                 *(int *)(**(int **)(local_18 + 8) + 0x4c) == 0)) {
                local_18 = (char *)0x0;
              }
              iVar7 = FUN_0041c720();
              if (iVar7 != 0) {
                FUN_0042cdb0((byte)iVar5,local_18 != (char *)0x0);
                FUN_004164c0(iVar5);
                if (local_18 != (char *)0x0) {
                  iVar5 = param_1[0x12] + 1;
                  param_1[0x12] = iVar5;
                  FUN_004197c0(iVar5,0,0x5e,pcVar6,0);
                  FUN_004197c0(0,iVar5,0x84,local_18,-10);
                  FUN_0040f330((int)param_1);
                }
                FUN_004082b0();
                if (((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0) &&
                   (iVar5 = FUN_0041a7d0(), iVar5 != 0)) {
                  FUN_0041abf0((undefined **)
                               "UPDATE \"%w\".%s SET sql = sqlite_rename_parent(sql, %Q, %Q) WHERE %s;"
                              );
                  FUN_00408130(iVar1);
                }
                FUN_0041abf0((undefined **)
                             "UPDATE %Q.%s SET sql = CASE WHEN type = \'trigger\' THEN sqlite_rename_trigger(sql, %Q)ELSE sqlite_rename_table(sql, %Q) END, tbl_name = %Q, name = CASE WHEN type=\'table\' THEN %Q WHEN name LIKE \'sqlite_autoindex%%\' AND type=\'index\' THEN \'sqlite_autoindex_\' || %Q || substr(name,%d+18) ELSE name END WHERE tbl_name=%Q AND (type=\'table\' OR type=\'index\' OR type=\'trigger\');"
                            );
                iVar5 = FUN_0040edd0(iVar1,"sqlite_sequence",pbVar3);
                if (iVar5 != 0) {
                  FUN_0041abf0((undefined **)
                               "UPDATE \"%w\".sqlite_sequence set name = %Q WHERE name = %Q");
                }
                iVar5 = FUN_0041a800(iVar4);
                if (iVar5 != 0) {
                  FUN_0041abf0((undefined **)
                               "UPDATE sqlite_temp_master SET sql = sqlite_rename_trigger(sql, %Q), tbl_name = %Q WHERE %s;"
                              );
                  FUN_00408130(iVar1);
                }
                if ((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0) {
                  for (piVar9 = (int *)FUN_0040f840(); piVar9 != (int *)0x0;
                      piVar9 = (int *)piVar9[3]) {
                    if (*piVar9 != iVar4) {
                      FUN_00420680(param_1,*piVar9);
                    }
                  }
                }
                FUN_00420680(param_1,iVar4);
              }
            }
            goto LAB_0044a49e;
          }
          pcVar6 = "view %s may not be altered";
        }
        else {
          pcVar6 = "table %s may not be altered";
        }
      }
      else {
        pcVar6 = "there is already another table or index with this name: %s";
      }
      FUN_00418b00((undefined **)pcVar6);
    }
  }
LAB_0044a49e:
  FUN_0040f240(param_2);
  FUN_00408130(iVar1);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  return;
}


/* END FUNCTION 0x0044a160 */

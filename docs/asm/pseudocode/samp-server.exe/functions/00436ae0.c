/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436ae0
 * Name: FUN_00436ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00436ae0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  int iVar7;
  int extraout_EDX;
  int iVar8;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    FUN_0041db50((undefined **)"cannot VACUUM from within a transaction");
    return 1;
  }
  local_10 = *(uint *)(param_1 + 0xc);
  local_c = *(undefined4 *)(param_1 + 0x3c);
  local_8 = *(undefined4 *)(param_1 + 0x40);
  *(uint *)(param_1 + 0xc) = local_10 & 0xfaffffff | 0x10050000;
  local_4 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  FUN_0040d020();
  uVar2 = FUN_0040b960();
  local_14 = CONCAT31(extraout_var,uVar2);
  iVar7 = *(int *)(param_1 + 4);
  FUN_00411870(param_1);
  uVar4 = FUN_004369f0();
  iVar5 = *(int *)(param_1 + 4);
  if (iVar7 < iVar5) {
    local_18 = iVar5 * 0x10 + -0x10 + *(int *)(param_1 + 8);
  }
  if (uVar4 == 0) {
    iVar7 = *(int *)(iVar5 * 0x10 + -0xc + *(int *)(param_1 + 8));
    FUN_0042ace0();
    iVar5 = FUN_0040cbf0();
    FUN_0040d020();
    uVar2 = FUN_0040b9e0();
    if (CONCAT31(extraout_var_00,uVar2) == 5) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar8 = 0;
    iVar6 = extraout_EDX;
    FUN_0040cbe0();
    iVar6 = FUN_00414a20(iVar7,iVar6,iVar8);
    if ((iVar6 == 0) &&
       (((local_14 != 0 || (iVar7 = FUN_00414a20(iVar7,iVar5,0), iVar7 == 0)) &&
        (*(char *)(param_1 + 0x1e) == '\0')))) {
      uVar4 = FUN_004369f0();
      if (uVar4 == 0) {
        cVar3 = *(char *)(param_1 + 0x20);
        if (cVar3 < '\0') {
          cVar3 = FUN_0040ccc0();
        }
        FUN_0040cc60(cVar3);
        uVar4 = FUN_004369f0();
        if (((((uVar4 == 0) &&
              (uVar4 = FUN_00436a50((int *)
                                    "SELECT \'CREATE TABLE vacuum_db.\' || substr(sql,14)   FROM sqlite_master WHERE type=\'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                   ), uVar4 == 0)) &&
             ((uVar4 = FUN_00436a50((int *)
                                    "SELECT \'CREATE INDEX vacuum_db.\' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE \'CREATE INDEX %\' "
                                   ), uVar4 == 0 &&
              ((uVar4 = FUN_00436a50((int *)
                                     "SELECT \'CREATE UNIQUE INDEX vacuum_db.\' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE \'CREATE UNIQUE INDEX %\'"
                                    ), uVar4 == 0 &&
               (uVar4 = FUN_00436a50((int *)
                                     "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\'FROM main.sqlite_master WHERE type = \'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                    ), uVar4 == 0)))))) &&
            (uVar4 = FUN_00436a50((int *)
                                  "SELECT \'DELETE FROM vacuum_db.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name=\'sqlite_sequence\' "
                                 ), uVar4 == 0)) &&
           ((uVar4 = FUN_00436a50((int *)
                                  "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name==\'sqlite_sequence\';"
                                 ), uVar4 == 0 && (uVar4 = FUN_004369f0(), uVar4 == 0)))) {
          iVar7 = 0;
          do {
            FUN_0040cff0((uint)(byte)(&DAT_004b3700)[iVar7],&local_14);
            uVar4 = FUN_00423a20((uint)(byte)(&DAT_004b3700)[iVar7]);
            if (uVar4 != 0) goto LAB_00436dc8;
            iVar7 = iVar7 + 2;
          } while (iVar7 < 8);
          uVar4 = FUN_0042fad0();
          if ((uVar4 == 0) && (uVar4 = FUN_0042ace0(), uVar4 == 0)) {
            cVar3 = FUN_0040ccc0();
            FUN_0040cc60(cVar3);
            iVar7 = 1;
            FUN_0040cbe0();
            uVar4 = FUN_00414a20(iVar1,iVar5,iVar7);
          }
        }
      }
    }
    else {
      uVar4 = 7;
    }
  }
LAB_00436dc8:
  *(uint *)(param_1 + 0xc) = local_10;
  *(undefined4 *)(param_1 + 0x3c) = local_c;
  *(undefined4 *)(param_1 + 0x40) = local_8;
  *(undefined4 *)(param_1 + 0x94) = local_4;
  FUN_00414a20(iVar1,-1,1);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (local_18 != 0) {
    FUN_0042d3b0(*(int *)(local_18 + 4));
    *(undefined4 *)(local_18 + 4) = 0;
    *(undefined4 *)(local_18 + 0xc) = 0;
  }
  FUN_00420a50(0);
  return uVar4;
}


/* END FUNCTION 0x00436ae0 */

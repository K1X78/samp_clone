/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044b2c0
 * Name: FUN_0044b2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044b2c0(int *param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 local_c;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x1e) != '\0') goto LAB_0044b5de;
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x21) = *(char *)(iVar1 + 0x21) + '\x01';
  }
  iVar3 = FUN_00442730();
  if (param_4 != 0) {
    *(char *)(iVar1 + 0x21) = *(char *)(iVar1 + 0x21) + -1;
  }
  if ((iVar3 == 0) ||
     ((iVar4 = FUN_0040fc30(iVar1), (*(byte *)(iVar3 + 0x22) & 0x10) != 0 &&
      (iVar5 = FUN_00446950(param_1,iVar3), iVar5 != 0)))) goto LAB_0044b5de;
  pcVar6 = "sqlite_temp_master";
  if (iVar4 != 1) {
    pcVar6 = "sqlite_master";
  }
  uVar2 = *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar1 + 8));
  local_c = 0;
  iVar5 = FUN_0041ab60(9,pcVar6,0,uVar2);
  if (iVar5 != 0) goto LAB_0044b5de;
  if (param_3 == 0) {
    if ((*(byte *)(iVar3 + 0x22) & 0x10) == 0) {
      iVar5 = (uint)(iVar4 == 1) * 2 + 0xb;
    }
    else {
      uVar8 = FUN_004103b0(iVar1);
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      local_c = *(undefined4 *)(*(int *)((int)uVar8 + 4) + 4);
    }
  }
  else {
    iVar5 = (uint)(iVar4 != 1) * 2 + 0xf;
  }
  iVar5 = FUN_0041ab60(iVar5,*(undefined4 *)(iVar3 + 4),local_c,uVar2);
  if ((iVar5 != 0) || (iVar5 = FUN_0041ab60(9,*(undefined4 *)(iVar3 + 4),0,uVar2), iVar5 != 0))
  goto LAB_0044b5de;
  iVar5 = FUN_004084a0(*(byte **)(iVar3 + 4),(byte *)"sqlite_",7);
  if (iVar5 == 0) {
    FUN_00418b00((undefined **)"table %s may not be dropped");
    goto LAB_0044b5de;
  }
  if (param_3 == 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      FUN_00418b00((undefined **)"use DROP VIEW to delete view %s");
      goto LAB_0044b5de;
    }
  }
  else if (*(int *)(iVar3 + 0x1c) == 0) {
    FUN_00418b00((undefined **)"use DROP TABLE to delete table %s");
    goto LAB_0044b5de;
  }
  iVar5 = FUN_0041c720();
  if (iVar5 != 0) {
    FUN_0042cdb0((byte)iVar4,1);
    if ((*(byte *)(iVar3 + 0x22) & 0x10) != 0) {
      FUN_00414e30();
    }
    FUN_0044b1e0(param_1,param_2);
    for (puVar7 = (undefined4 *)FUN_004101a0(iVar3); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[8]) {
      FUN_0042d0c0(puVar7);
    }
    if ((*(byte *)(iVar3 + 0x22) & 8) != 0) {
      FUN_0041abf0((undefined **)"DELETE FROM %s.sqlite_sequence WHERE name=%Q");
    }
    FUN_0041abf0((undefined **)"DELETE FROM %Q.%s WHERE tbl_name=%Q and type!=\'trigger\'");
    iVar5 = FUN_0040edd0(iVar1,"sqlite_stat1",*(byte **)(*(int *)(iVar1 + 8) + iVar4 * 0x10));
    if (iVar5 != 0) {
      FUN_0041abf0((undefined **)"DELETE FROM %Q.sqlite_stat1 WHERE tbl=%Q");
    }
    if (param_3 == 0) {
      if ((*(byte *)(iVar3 + 0x22) & 0x10) == 0) {
        FUN_00420d00(param_1);
        goto LAB_0044b57e;
      }
LAB_0044b584:
      FUN_004197c0(0,iVar4,0x7e,*(char **)(iVar3 + 4),0);
    }
    else {
LAB_0044b57e:
      if ((*(byte *)(iVar3 + 0x22) & 0x10) != 0) goto LAB_0044b584;
    }
    FUN_004197c0(0,iVar4,0x65,*(char **)(iVar3 + 4),0);
    FUN_004164c0(iVar4);
  }
  FUN_004165d0(iVar1);
LAB_0044b5de:
  FUN_0040f240(param_2);
  return;
}


/* END FUNCTION 0x0044b2c0 */

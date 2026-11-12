/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004465f0
 * Name: FUN_004465f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004465f0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *in_EAX;
  int iVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *extraout_ECX_01;
  undefined4 *puVar9;
  undefined4 local_40 [5];
  int local_2c;
  undefined4 local_20;
  
  iVar7 = *in_EAX;
  if ((param_2 == 0) && (param_3 == (int *)0x0)) {
    return;
  }
  if (*(char *)(iVar7 + 0x1e) != '\0') {
    return;
  }
  iVar1 = in_EAX[0x80];
  if (iVar1 != 0) {
    iVar3 = FUN_0040fc30(iVar7);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      puVar9 = local_40;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_40[3] = *(undefined4 *)(iVar1 + 4);
      local_40[0]._0_2_ = 1;
      local_20 = 0xffffffff;
      local_2c = iVar1;
      bVar2 = FUN_00424ba0(local_40[3]);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return;
      }
    }
    if ((*(char *)(iVar7 + 0x7c) == '\0') ||
       (*(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar7 + 0x78),
       *(char *)(iVar7 + 0x7c) == '\0')) {
      iVar8 = FUN_0041c720();
      if (iVar8 == 0) {
        return;
      }
      FUN_00414e50(0x2b);
      if (param_3 == (int *)0x0) {
        FUN_00418920((undefined **)"CREATE %s %.*s");
      }
      else {
        FUN_00414dd0(0x27,1,in_EAX[0x67],iVar3);
        FUN_0040d660(extraout_ECX,1);
        in_EAX[0x11] = 2;
        pbVar4 = (byte *)FUN_0040fcc0(extraout_ECX_00,1,8);
        FUN_00443d60(in_EAX,param_3,pbVar4);
        FUN_00414e50(0x2b);
        if (in_EAX[0x10] == 0) {
          piVar5 = FUN_00446370(in_EAX);
          if (piVar5 == (int *)0x0) {
            return;
          }
          *(int *)(iVar1 + 0xc) = piVar5[3];
          *(int *)(iVar1 + 0x10) = piVar5[4];
          piVar5[3] = 0;
          piVar5[4] = 0;
          FUN_0041aca0(piVar5);
        }
        FUN_0041af90(iVar7,iVar1);
      }
      FUN_0041abf0((undefined **)
                   "UPDATE %Q.%s SET type=\'%s\', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d"
                  );
      FUN_00408130(iVar7);
      FUN_004164c0(iVar3);
      if (((*(byte *)(iVar1 + 0x22) & 8) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar7 + 8) + 0xc + iVar3 * 0x10) + 0x44) == 0)) {
        FUN_0041abf0((undefined **)"CREATE TABLE %Q.sqlite_sequence(name,seq)");
      }
      iVar8 = -1;
      pcVar6 = (char *)FUN_00418920((undefined **)"tbl_name=\'%q\'");
      FUN_004197c0(0,iVar3,99,pcVar6,iVar8);
      if (*(char *)(iVar7 + 0x7c) == '\0') {
        return;
      }
    }
    iVar3 = *(int *)(iVar1 + 0x44);
    iVar8 = iVar1;
    FUN_00408380(*(char **)(iVar1 + 4));
    iVar3 = FUN_00412f40((void *)(iVar3 + 4),extraout_ECX_01,iVar8);
    if (iVar3 == 0) {
      in_EAX[0x80] = 0;
      *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
      *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) | 0x200;
      if (*(int *)(iVar1 + 0x1c) == 0) {
        iVar7 = FUN_004082b0();
        *(int *)(iVar1 + 0x30) = iVar7 + 0xd;
      }
      return;
    }
    *(undefined1 *)(iVar7 + 0x1e) = 1;
    return;
  }
  return;
}


/* END FUNCTION 0x004465f0 */

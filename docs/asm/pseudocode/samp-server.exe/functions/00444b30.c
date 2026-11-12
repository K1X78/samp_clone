/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00444b30
 * Name: FUN_00444b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00444b30(int *param_1,int param_2,int param_3,undefined1 param_4,int *param_5,short *param_6,
            undefined4 *param_7,int param_8,int param_9)

{
  int iVar1;
  byte *in_EAX;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  byte *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [16];
  
  iVar1 = *param_1;
  local_1c = (undefined4 *)0x0;
  if (param_8 == 0) {
    iVar11 = FUN_0041ad60(param_1,(int *)&local_20);
    if (iVar11 < 0) goto LAB_00444e8d;
  }
  else {
    if (*(int *)(param_2 + 4) != 0) {
      FUN_00418b00((undefined **)"temporary trigger may not have qualified name");
      goto LAB_00444e8d;
    }
    iVar11 = 1;
    local_20 = in_EAX;
  }
  if ((param_6 == (short *)0x0) || (*(char *)(iVar1 + 0x1e) != '\0')) goto LAB_00444e8d;
  iVar2 = FUN_00442e70();
  if ((*(char *)(iVar1 + 0x7c) == '\0') &&
     (((*(int *)(param_2 + 4) == 0 && (iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x44) == *(int *)(*(int *)(iVar1 + 8) + 0x1c))))) {
    iVar11 = 1;
  }
  if ((*(char *)(iVar1 + 0x1e) != '\0') ||
     ((iVar2 = FUN_0040ecb0(local_10,"trigger",local_20), iVar2 != 0 &&
      (iVar2 = FUN_00420930((int)local_10,param_6), iVar2 != 0)))) goto LAB_00444e8d;
  local_18 = FUN_00442e70();
  if (local_18 == 0) {
    if (*(int *)(iVar1 + 0x74) == 1) {
      *(undefined1 *)(iVar1 + 0x7d) = 1;
    }
    goto LAB_00444e8d;
  }
  if ((*(byte *)(local_18 + 0x22) & 0x10) != 0) {
    FUN_00418b00((undefined **)"cannot create triggers on virtual tables");
    goto LAB_00444e8d;
  }
  pcVar3 = (char *)FUN_00416430();
  if ((pcVar3 == (char *)0x0) || (iVar2 = FUN_0041add0(), iVar2 != 0)) goto LAB_00444e8d;
  iVar2 = *(int *)(iVar1 + 8);
  local_14 = iVar11 << 4;
  FUN_00408380(pcVar3);
  iVar4 = FUN_00409170();
  iVar11 = local_18;
  if (iVar4 != 0) {
    if (param_9 == 0) {
      FUN_00418b00((undefined **)"trigger %T already exists");
    }
    goto LAB_00444e8d;
  }
  local_20 = *(byte **)(local_18 + 4);
  iVar4 = FUN_004084a0(local_20,(byte *)"sqlite_",7);
  if (iVar4 == 0) {
    FUN_00418b00((undefined **)"cannot create trigger on system table");
    param_1[0x10] = param_1[0x10] + 1;
    goto LAB_00444e8d;
  }
  if (*(int *)(iVar11 + 0x1c) == 0) {
LAB_00444d50:
    if (param_3 == 0x30) {
      FUN_00418b00((undefined **)"cannot create INSTEAD OF trigger on table: %S");
      goto LAB_00444e8d;
    }
  }
  else {
    if (param_3 != 0x30) {
      FUN_00418b00((undefined **)"cannot create %s trigger on view: %S");
      goto LAB_00444e8d;
    }
    if (*(int *)(iVar11 + 0x1c) == 0) goto LAB_00444d50;
  }
  iVar11 = FUN_0040fc30(iVar1);
  uVar8 = *(undefined4 *)(iVar11 * 0x10 + iVar2);
  uVar5 = 7;
  uVar10 = uVar8;
  if (param_8 != 0) {
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
  }
  if ((iVar11 == 1) || (param_8 != 0)) {
    uVar5 = 5;
  }
  iVar2 = FUN_0041ab60(uVar5,pcVar3,local_20,uVar10);
  if (iVar2 == 0) {
    pcVar6 = "sqlite_temp_master";
    if (iVar11 != 1) {
      pcVar6 = "sqlite_master";
    }
    iVar11 = FUN_0041ab60(0x12,pcVar6,0,uVar8);
    if (iVar11 == 0) {
      if (param_3 == 0x30) {
        param_3 = 0x22;
      }
      puVar7 = FUN_00417b70();
      local_1c = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = pcVar3;
        pcVar3 = FUN_00412a70();
        puVar7[1] = pcVar3;
        puVar7[5] = *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc + local_14);
        puVar7[6] = *(undefined4 *)(local_18 + 0x44);
        *(undefined1 *)(puVar7 + 2) = param_4;
        *(char *)((int)puVar7 + 9) = (param_3 != 0x22) + '\x01';
        uVar8 = FUN_00420310(iVar1,param_7,1);
        puVar7[3] = uVar8;
        piVar9 = FUN_00415a40(iVar1,param_5);
        puVar7[4] = piVar9;
        param_1[0x81] = (int)puVar7;
      }
    }
  }
LAB_00444e8d:
  FUN_00408130(iVar1);
  FUN_0040f240(param_6);
  FUN_0040f150();
  FUN_004158d0(iVar1,(int)param_7);
  if (param_1[0x81] == 0) {
    FUN_00416c30();
  }
  return;
}


/* END FUNCTION 0x00444b30 */

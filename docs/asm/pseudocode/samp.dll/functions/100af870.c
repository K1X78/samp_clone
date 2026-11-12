/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af870
 * Name: FUN_100af870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100af870(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 local_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ushort local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  char local_5;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    local_5 = *DAT_1015195c;
    cVar1 = FUN_1009c330(*(char *)(param_1 + 0x2b0));
    *DAT_1015195c = cVar1;
    local_18 = *DAT_10151964;
    bVar2 = FUN_1009c330(*(undefined1 *)(param_1 + 0x2b0));
    *DAT_10151964 = (ushort)bVar2;
    if (*DAT_10151964 == 4) {
      *DAT_10151964 = 0;
    }
    FUN_1009c240();
    FUN_1009c2d0(*(undefined1 *)(param_1 + 0x2b0));
    FUN_1009c3c0();
    FUN_1009c440(*(undefined1 *)(param_1 + 0x2b0));
    FUN_1009c5b0();
    FUN_1009c7a0(*(undefined1 *)(param_1 + 0x2b0));
  }
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_1009c340();
  }
  else {
    FUN_1009c330(*(char *)(param_1 + 0x2b0));
  }
  iVar3 = FUN_100ac6e0();
  if (*DAT_1015195c == '7') {
    FUN_100ae680(local_70,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x4a0) + 0x14));
    FUN_100b5230(param_2,iVar3,local_70);
  }
  else {
    local_c = *(int **)(param_1 + 0x2a4);
    if ((local_c != (int *)0x0) && (*local_c != 0x863c40)) {
      (*(code *)0x5e4280)(param_2,0x18,0);
    }
    param_2[2] = *(float *)(iVar3 + 8) + (float)param_2[2] + 0.15;
  }
  local_c = (int *)*param_2;
  local_10 = param_2[1];
  local_14 = param_2[2];
  (*(code *)0x514970)(0x43960000,local_c,local_10,local_14,&local_30,&local_24);
  *param_3 = local_24;
  param_3[1] = local_20;
  param_3[2] = local_1c;
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    *DAT_1015195c = local_5;
    *DAT_10151964 = local_18;
    FUN_1009c640();
    FUN_1009c260();
    FUN_1009c3e0();
  }
  return;
}


/* END FUNCTION 0x100af870 */

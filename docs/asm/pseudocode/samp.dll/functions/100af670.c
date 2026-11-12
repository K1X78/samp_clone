/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af670
 * Name: FUN_100af670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100af670(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined1 local_1d;
  char local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    uVar5 = local_1c._0_2_;
  }
  else {
    local_1d = *DAT_1015195c;
    uVar1 = FUN_1009c330(*(char *)(param_1 + 0x2b0));
    *DAT_1015195c = uVar1;
    uVar5 = *DAT_10151964;
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
  if (*(int *)(param_1 + 0x329) == 0) {
    DAT_1018f668 = 0;
  }
  else {
    DAT_1018f668 = param_1 + 0x2fd;
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  DAT_1018f664 = param_1;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar3 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar3 != 0) {
      FUN_100b1f10(&DAT_1011ef54,*(undefined4 *)(param_1 + 0x44),local_1c);
      if (local_1c[0] == '\"') {
        iVar3 = *(int *)(param_1 + 0x2a4);
        if (iVar3 == 0) {
          FUN_100b6050(0,0);
        }
        else {
          FUN_100b6050((uint)*(byte *)(iVar3 + 0x718) * 0x1c + 0x5a0 + iVar3,iVar3);
        }
        goto LAB_100af816;
      }
    }
  }
  FUN_100af5c0(0,&local_c,&local_18);
  iVar3 = *(int *)(param_1 + 0x2a4);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (uint)*(byte *)(iVar3 + 0x718) * 0x1c + 0x5a0 + iVar3;
  }
  FUN_100b6020(iVar4,iVar3,&local_c,&local_18,0,0,0,0,1);
LAB_100af816:
  DAT_1018f664 = 0;
  DAT_1018f668 = 0;
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    *DAT_1015195c = local_1d;
    *DAT_10151964 = uVar5;
    FUN_1009c260();
    FUN_1009c3e0();
    FUN_1009c640();
  }
  return 1;
}


/* END FUNCTION 0x100af670 */

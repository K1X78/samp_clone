/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008810
 * Name: FUN_10008810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008810(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10117a40;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(char *)(param_1 + 0x3d9) != '\0') {
    ExceptionList = &local_14;
    iVar3 = FUN_1002e2b0();
    if ((uint)(iVar3 - *(int *)(param_1 + 0x3da)) < 0x3e9) {
      ExceptionList = local_14;
      return;
    }
    *(undefined1 *)(param_1 + 0x3d9) = 0;
    if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x1e) + 0xf4) != 0) {
      uVar5 = 1;
      FUN_10001010(1);
      FUN_100ac3b0(uVar5);
      uVar5 = 1;
      FUN_10001010(1);
      FUN_1009f470(uVar5);
      uVar5 = 1;
      FUN_10001010(1);
      FUN_1009f4c0(uVar5);
    }
  }
  if (((*(char *)(*(int *)(param_1 + 0x3d5) + 0x1a) != '\0') && (iVar3 = FUN_10001010(), iVar3 != 0)
      ) && (iVar3 = FUN_100adf30(), iVar3 == 0)) {
    pcVar4 = (char *)FUN_100adee0();
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 != pcVar1) {
      FUN_100adf00(&DAT_10117a39);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x3de) + 8) != 0) {
    FUN_100136c0();
  }
  if ((*(int *)(*(int *)(param_1 + 0x3de) + 0xc) == 0) || (DAT_10156b2c < 3)) {
    DAT_10156b2c = DAT_10156b2c + 1;
  }
  else {
    local_8 = 0;
    FUN_1001ee80();
    DAT_10156b2c = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x3de) + 0x10) == 0) || (DAT_10156b30 < 6)) {
    DAT_10156b30 = DAT_10156b30 + 1;
  }
  else {
    local_8 = 1;
    FUN_10013420();
    DAT_10156b30 = 0;
  }
  if (**(int **)(param_1 + 0x3de) == 0) {
    ExceptionList = local_14;
    return;
  }
  local_8 = 2;
  FUN_10007ef0();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x10008810 */

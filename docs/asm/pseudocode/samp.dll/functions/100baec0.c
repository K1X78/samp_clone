/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100baec0
 * Name: FUN_100baec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


size_t __fastcall FUN_100baec0(int param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  void **ppvVar4;
  void *pvVar5;
  uint uVar6;
  size_t local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116848;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = 0;
  local_24 = 0;
  uVar6 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (*(int *)(param_1 + 0x8c) != 0) {
    do {
      iVar3 = local_14;
      iVar1 = *(int *)(param_1 + 0x88) + uVar6 * 8;
      if ((local_18 == 0) || ((uint)(local_10 - local_18 >> 3) <= (uint)(local_14 - local_18 >> 3)))
      {
        FUN_100ba8b0(local_14,1,iVar1);
      }
      else {
        FUN_100ba1d0(local_14,1,iVar1,local_1c,local_44);
        local_14 = iVar3 + 8;
      }
      uVar6 = uVar6 + 1;
      ppvVar4 = ExceptionList;
    } while (uVar6 < *(uint *)(param_1 + 0x8c));
  }
  ExceptionList = ppvVar4;
  local_34 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = *(undefined4 *)(param_1 + 0x30);
  local_2c = *(undefined4 *)(param_1 + 0x34);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  local_3c = *(undefined4 *)(param_1 + 0x24);
  local_38 = *(undefined4 *)(param_1 + 0x28);
  FUN_100babf0(param_1);
  local_44 = 0;
  if (local_24 == 0) {
    if ((local_18 != 0) && (local_14 - local_18 >> 3 != 0)) {
      local_44 = 1;
    }
  }
  else {
    FUN_100b9d10(&local_44);
    FUN_100b9d10(&local_44);
  }
  pvVar5 = _calloc(local_44,0x1c);
  *(void **)(param_1 + 0x98) = pvVar5;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_100ba320(param_1);
  sVar2 = local_44;
  local_4 = 0xffffffff;
  FUN_100ba750();
  ExceptionList = local_c;
  return sVar2;
}


/* END FUNCTION 0x100baec0 */

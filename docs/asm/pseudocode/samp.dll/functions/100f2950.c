/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2950
 * Name: FUN_100f2950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f2950(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  uint local_c;
  
  param_1[1] = param_2;
  *param_1 = 0;
  param_1[2] = param_3;
  iVar1 = FUN_100f1a40(&local_28,param_2,param_3);
  uVar3 = local_20;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_100f1a40(local_14,local_24,local_20);
  uVar2 = FUN_100f1a40(param_1 + 0xf,uVar2,uVar3);
  FUN_100f1a40(param_1 + 0x14,uVar2,uVar3);
  param_1[5] = 0;
  param_1[6] = &DAT_1012a010;
  param_1[7] = &DAT_1012a011;
  uVar3 = FUN_100f1a40(&local_28,local_10,local_c);
  if (local_1c._1_1_ == '\0') {
    FUN_100f1a40(param_1 + 5,local_24,local_20);
    uVar3 = FUN_100f1a40(&local_28,uVar3,local_c);
  }
  param_1[10] = local_28;
  param_1[0xb] = local_24;
  param_1[0xc] = local_20;
  param_1[0xd] = local_1c;
  param_1[0xe] = local_18;
  uVar3 = FUN_100f1a40(param_1 + 0xf,uVar3,local_c);
  uVar3 = FUN_100f1a40(param_1 + 0x19,uVar3,local_c);
  uVar2 = FUN_100f1a40(&local_28,uVar3,local_c);
  uVar3 = local_20;
  uVar4 = FUN_100f1a40(param_1 + 0x1e,local_24,local_20);
  FUN_100f1a40(param_1 + 0x23,uVar4,uVar3);
  uVar3 = FUN_100f1a40(param_1 + 0x28,uVar2,local_c);
  uVar5 = FUN_100f1a40(param_1 + 0x2d,uVar3,local_c);
  uVar3 = FUN_100f1a40(param_1 + 0x32,param_1[0x2e],param_1[0x2f]);
  FUN_100f1a40(param_1 + 0x37,uVar3,param_1[0x2f]);
  *(undefined1 *)((int)param_1 + 0x111) = 0;
  *(undefined1 *)((int)param_1 + 0xfd) = 0;
  local_1c._0_2_ = (ushort)(byte)local_1c;
  *(undefined1 *)((int)param_1 + 0x125) = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = &DAT_10117a39;
  param_1[0x3d] = &DAT_10117a39;
  param_1[0x43] = &DAT_10117a39;
  param_1[0x42] = &DAT_10117a39;
  param_1[0x46] = 0;
  param_1[0x48] = &DAT_10117a39;
  param_1[0x47] = &DAT_10117a39;
  if (uVar5 < local_c) {
    uVar5 = FUN_100f1a40(&local_28,uVar5,local_c);
    if (local_1c._1_1_ == '\x01') {
      param_1[0x3c] = local_28;
      param_1[0x3d] = local_24;
      param_1[0x3e] = local_20;
      param_1[0x3f] = local_1c;
      param_1[0x40] = local_18;
      if (local_c <= uVar5) {
        return 0;
      }
      uVar5 = FUN_100f1a40(&local_28,uVar5,local_c);
    }
    if (local_1c._1_1_ == '\x02') {
      param_1[0x41] = local_28;
      param_1[0x42] = local_24;
      param_1[0x43] = local_20;
      param_1[0x44] = local_1c;
      param_1[0x45] = local_18;
      if (local_c <= uVar5) {
        return 0;
      }
      FUN_100f1a40(&local_28,uVar5,local_c);
    }
    if (local_1c._1_1_ == '\x03') {
      FUN_100f1a40(param_1 + 0x46,local_24,local_20);
    }
  }
  return 0;
}


/* END FUNCTION 0x100f2950 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ebd0
 * Name: FUN_0041ebd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041ebd0(int param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  int unaff_EBX;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  local_18 = 0;
  if ((uVar2 == 0) || (*(short *)(param_1 + 0x1a) == 0)) {
    *param_2 = 0;
    return 0;
  }
  local_14 = FUN_0040bd90();
  if (-1 < (int)local_14) {
    do {
      if (local_18 != 0) goto LAB_0041ecb4;
      iVar4 = FUN_00414540(&local_c,&local_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_10 = 0x2000;
      uVar5 = FUN_0040bd70();
      iVar3 = local_8;
      sVar1 = *(short *)(local_c + uVar5 * 2);
      iVar4 = local_c;
      while (sVar1 != 0) {
        uVar6 = (uint)*(ushort *)(iVar4 + uVar5 * 2) + local_4;
        if ((uVar6 <= uVar2) &&
           (*(int *)(iVar3 + (uint)*(ushort *)(iVar4 + uVar5 * 2) * 4) == unaff_EBX)) {
          local_18 = uVar6;
        }
        if (local_10 == 0) {
          iVar4 = FUN_0041d790();
          return iVar4;
        }
        uVar5 = FUN_0040bd80();
        local_10 = local_10 + -1;
        iVar4 = extraout_EDX;
        sVar1 = *(short *)(extraout_EDX + uVar5 * 2);
      }
      local_14 = local_14 - 1;
    } while (-1 < (int)local_14);
    if (local_18 != 0) {
LAB_0041ecb4:
      __allmul(*(ushort *)(param_1 + 0x2e) + 0x18,0,local_18 - 1,0);
      *param_2 = 1;
      iVar4 = FUN_00407ad0();
      return iVar4;
    }
  }
  *param_2 = 0;
  return 0;
}


/* END FUNCTION 0x0041ebd0 */

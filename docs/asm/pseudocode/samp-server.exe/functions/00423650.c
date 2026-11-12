/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423650
 * Name: FUN_00423650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00423650(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_14;
  uint local_10;
  int local_8;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = *(uint *)(iVar1 + 0x78) / *(uint *)(iVar1 + 0x84);
  if (uVar4 < 2) {
    uVar4 = FUN_00419360();
    return uVar4;
  }
  *(char *)(iVar1 + 0x15) = *(char *)(iVar1 + 0x15) + '\x01';
  local_14 = 0;
  bVar2 = false;
  uVar6 = (~(uVar4 - 1) & *(int *)(param_1 + 0xc) - 1U) + 1;
  local_10 = FUN_00414010(&local_4);
  if (local_10 == 0) {
    if (local_4 < *(uint *)(param_1 + 0xc)) {
      local_14 = (*(uint *)(param_1 + 0xc) - uVar6) + 1;
    }
    else {
      local_14 = uVar4;
      if (local_4 < (uVar4 - 1) + uVar6) {
        local_14 = (local_4 - uVar6) + 1;
      }
    }
  }
  local_4 = 0;
  uVar4 = uVar6;
  if (0 < (int)local_14) {
    do {
      if (local_10 != 0) goto LAB_004237d7;
      if ((uVar4 == *(uint *)(param_1 + 0xc)) ||
         (bVar3 = FUN_00409e90(*(uint **)(iVar1 + 0x34)), CONCAT31(extraout_var,bVar3) == 0)) {
        if ((uVar4 != DAT_004ca204 / *(int *)(iVar1 + 0x84) + 1U) &&
           (local_10 = FUN_004234f0(uVar4,&local_8,0), iVar7 = local_8, local_10 == 0)) {
          local_10 = FUN_00419360();
          if ((*(byte *)(iVar7 + 0x14) & 4) != 0) {
            bVar2 = true;
          }
          FUN_00427080(iVar7);
        }
      }
      else {
        local_8 = FUN_0040b480(uVar4);
        if (local_8 != 0) {
          if ((*(byte *)(local_8 + 0x14) & 4) != 0) {
            bVar2 = true;
          }
          FUN_00427080(local_8);
        }
      }
      local_4 = local_4 + 1;
      uVar4 = uVar4 + 1;
    } while ((int)local_4 < (int)local_14);
  }
  if (((local_10 == 0) && (bVar2)) && (iVar7 = 0, 0 < (int)local_14)) {
    do {
      iVar5 = FUN_0040b480(iVar7 + uVar6);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 0x14) = *(byte *)(iVar5 + 0x14) | 4;
        FUN_00427080(iVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_14);
  }
LAB_004237d7:
  *(char *)(iVar1 + 0x15) = *(char *)(iVar1 + 0x15) + -1;
  return local_10;
}


/* END FUNCTION 0x00423650 */

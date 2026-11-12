/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423e90
 * Name: FUN_00423e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00423e90(int param_1,byte *param_2,int *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_ECX;
  int iVar7;
  int iVar8;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_28;
  int local_24;
  undefined4 local_18;
  undefined1 local_9;
  
  puVar2 = (undefined4 *)*param_3;
  local_9 = *(undefined1 *)(puVar2 + 1);
  local_18 = *puVar2;
  iVar7 = 0;
  if (*param_2 < 0x80) {
    local_40 = (uint)*param_2;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00408ed0(param_2);
    uVar3 = uVar3 & 0xff;
  }
  local_3c = local_40;
  if ((*(byte *)((int)param_3 + 6) & 4) != 0) {
    local_40 = local_40 - 1;
  }
  uVar1 = *(ushort *)((int)puVar2 + 6);
  if (uVar3 < local_40) {
    iVar8 = 0;
    do {
      if ((int)(uint)*(ushort *)(param_3 + 1) <= iVar7) break;
      if (param_2[uVar3] < 0x80) {
        uVar4 = 1;
      }
      else {
        uVar4 = FUN_00408ed0(param_2 + uVar3);
        uVar4 = uVar4 & 0xff;
      }
      uVar3 = uVar3 + uVar4;
      uVar4 = local_3c;
      if ((param_1 <= (int)local_3c) && (uVar5 = FUN_0040d9a0(), uVar4 = extraout_ECX, uVar5 != 0))
      break;
      uVar4 = FUN_0040da70((char *)(param_2 + uVar4));
      local_3c = local_3c + uVar4;
      iVar6 = FUN_00423c70((uint *)(param_3[4] + iVar8),&local_28);
      if (iVar6 != 0) {
        if (((puVar2[2] != 0) && (iVar7 < (int)(uint)uVar1)) &&
           (*(char *)(puVar2[2] + iVar7) != '\0')) {
          iVar6 = -iVar6;
        }
        if (((*(ushort *)((int)param_3 + 6) & 0x20) != 0) && (iVar7 == *(ushort *)(param_3 + 1) - 1)
           ) {
          *(ushort *)((int)param_3 + 6) = *(ushort *)((int)param_3 + 6) & 0xffdf;
          param_3[2] = local_28;
          param_3[3] = local_24;
        }
        return iVar6;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x28;
    } while (uVar3 < local_40);
  }
  local_44 = 0;
  if ((*(ushort *)((int)param_3 + 6) & 8) != 0) {
    return -1;
  }
  if (((*(ushort *)((int)param_3 + 6) & 0x10) == 0) && (uVar3 < local_40)) {
    local_44 = 1;
  }
  return local_44;
}


/* END FUNCTION 0x00423e90 */

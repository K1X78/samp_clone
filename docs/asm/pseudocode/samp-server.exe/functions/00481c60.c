/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481c60
 * Name: FUN_00481c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00481c60(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  char *pcVar9;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  uint *local_8;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((DAT_004fc408 <= uVar1) || (local_14 = *(int *)(DAT_004fc404 + uVar1 * 4), local_14 == 0)) {
    if (DAT_004fc464 == 0) {
      return 0;
    }
    FUN_00491fa0("[Error] db_get_field_assoc(): invalid result handle %u");
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_004031d0(local_8,&local_18);
  if (0 < local_18) {
    iVar7 = -(local_18 + 4U & 0xfffffffc);
    pbVar3 = &stack0xffffffd8;
    local_c = &stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
      *(int *)(&stack0xffffffd4 + iVar7) = local_18 + 1;
      *(undefined4 *)(&stack0xffffffd0 + iVar7) = 0;
      *(uint **)(&stack0xffffffcc + iVar7) = local_8;
      *(undefined1 **)(&stack0xffffffc8 + iVar7) = &stack0xffffffd8;
      *(undefined4 *)(&stack0xffffffc4 + iVar7) = 0x481d01;
      FUN_00403350(*(int *)(&stack0xffffffc8 + iVar7),*(uint **)(&stack0xffffffcc + iVar7),
                   *(int *)(&stack0xffffffd0 + iVar7),*(uint *)(&stack0xffffffd4 + iVar7));
      goto LAB_00481d0b;
    }
  }
  pbVar3 = (byte *)0x0;
  local_c = (byte *)0x0;
LAB_00481d0b:
  local_10 = *(int *)(local_14 + 4);
  iVar7 = 0;
  if (0 < local_10) {
    puVar5 = *(undefined4 **)(local_14 + 8);
    do {
      pbVar6 = (byte *)*puVar5;
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00481d54:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00481d59;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00481d54;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00481d59:
      if (iVar4 == 0) {
        if ((-1 < iVar7) && (iVar7 < local_10)) {
          pcVar9 = (char *)(*(undefined4 **)(local_14 + 8))
                           [(*(int *)(local_14 + 0x10) + 1) * local_10 + iVar7];
          if (pcVar9 == (char *)0x0) {
            iVar7 = *(int *)(param_2 + 0x10);
            iVar4 = *(int *)(param_2 + 0xc);
            pcVar9 = "";
          }
          else {
            iVar7 = *(int *)(param_2 + 0x10);
            iVar4 = *(int *)(param_2 + 0xc);
          }
          FUN_0046fcb0(param_1,iVar4,pcVar9,iVar7);
          return 1;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      pbVar3 = local_c;
    } while (iVar7 < local_10);
  }
  FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),"",*(int *)(param_2 + 0x10));
  return 0;
}


/* END FUNCTION 0x00481c60 */

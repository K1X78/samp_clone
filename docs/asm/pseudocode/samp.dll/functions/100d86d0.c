/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d86d0
 * Name: FUN_100d86d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d86d0(int param_1,undefined4 *param_2)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  if (*(int *)(unaff_EBX + 0x487c) != 0) {
    piVar1 = (int *)(unaff_EBX + 0x4888);
    uVar5 = 0;
    do {
      if (*piVar1 == param_1) {
        iVar2 = unaff_EBX + 0x838 + uVar5 * 0xc;
        iVar3 = *(int *)(iVar2 + 0x404c) + in_EAX;
        iVar4 = (*(code *)PTR__realloc_101554c0)
                          (*(undefined4 *)(unaff_EBX + 0x4880 + uVar5 * 0xc),iVar3);
        if (iVar4 == 0) {
          return 0x1b;
        }
        puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x404c) + iVar4);
        for (uVar5 = in_EAX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *param_2;
          param_2 = param_2 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = in_EAX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(int *)(iVar2 + 0x4048) = iVar4;
        *(int *)(iVar2 + 0x404c) = iVar3;
        goto LAB_100d87a2;
      }
      uVar5 = uVar5 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar5 < *(uint *)(unaff_EBX + 0x487c));
  }
  iVar2 = FUN_100d9960(param_2);
  if (iVar2 == 0) {
    return 0x1b;
  }
  iVar3 = unaff_EBX + 0x838 + uVar5 * 0xc;
  *(int *)(iVar3 + 0x4048) = iVar2;
  *(int *)(unaff_EBX + 0x838 + (uVar5 * 3 + 0x1014) * 4) = param_1;
  *(uint *)(iVar3 + 0x404c) = in_EAX;
  *(int *)(unaff_EBX + 0x487c) = *(int *)(unaff_EBX + 0x487c) + 1;
LAB_100d87a2:
  *(uint *)(unaff_EBX + 0x110) = *(uint *)(unaff_EBX + 0x110) | 0x10;
  return 0;
}


/* END FUNCTION 0x100d86d0 */

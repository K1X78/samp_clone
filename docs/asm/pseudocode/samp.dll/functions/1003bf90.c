/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003bf90
 * Name: FUN_1003bf90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003bf90(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar2 - (int)(param_2 + 1)) < 0x10) {
      puVar5 = (undefined4 *)0x0;
      uVar6 = 0;
      FUN_100532c0();
      if (*(uint *)(param_1 + 0x3a5) != 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x3a1);
        do {
          pbVar2 = *(byte **)*puVar5;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar7 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_1003c02b:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_1003c030;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar7 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_1003c02b;
            pbVar3 = pbVar3 + 2;
            pbVar2 = pbVar2 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003c030:
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x3a1);
            puVar5 = *(undefined4 **)(iVar4 + uVar6 * 4);
            *(undefined4 *)(iVar4 + uVar6 * 4) =
                 *(undefined4 *)(iVar4 + -4 + *(int *)(param_1 + 0x3a5) * 4);
            FUN_1003acc0(*(int *)(param_1 + 0x3a5) + -1);
            goto LAB_1003c06f;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x3a5));
        puVar5 = (undefined4 *)0x0;
      }
LAB_1003c06f:
      FUN_100532d0();
      if (puVar5 != (undefined4 *)0x0) {
        _free((void *)*puVar5);
        _free(puVar5);
      }
    }
  }
  return;
}


/* END FUNCTION 0x1003bf90 */

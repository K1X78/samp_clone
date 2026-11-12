/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a290
 * Name: FUN_1003a290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003a290(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  
  iVar2 = FUN_1002e2b0();
  iVar6 = 10;
  bVar9 = true;
  pbVar3 = param_2;
  pbVar4 = &DAT_1011ae70;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar9);
  if (((!bVar9) && (param_2 != (byte *)0x0)) && (*param_2 != 0)) {
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar3 - (int)(param_2 + 1)) < 0x10) {
      uVar8 = 0;
      FUN_100532c0();
      if (*(uint *)(param_1 + 0x3a5) != 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x3a1);
        puVar7 = puVar5;
        do {
          pbVar3 = *(byte **)*puVar7;
          pbVar4 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar3;
            if (bVar1 != *pbVar3) {
LAB_1003a344:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_1003a349;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar3[1];
            if (bVar1 != pbVar3[1]) goto LAB_1003a344;
            pbVar4 = pbVar4 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_1003a349:
          if (iVar6 == 0) {
            if (param_3 != 0) {
              *(int *)(puVar5[uVar8] + 4) = iVar2 + param_3;
              FUN_100532d0();
              return;
            }
            *(undefined4 *)(puVar5[uVar8] + 4) = 0;
            FUN_100532d0();
            return;
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x3a5));
      }
      FUN_100532d0();
      puVar5 = operator_new(8);
      pbVar3 = operator_new(0x10);
      *puVar5 = pbVar3;
      if (param_3 == 0) {
        puVar5[1] = 0;
      }
      else {
        puVar5[1] = iVar2 + param_3;
      }
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      FUN_100532c0();
      FUN_10038a80(puVar5);
      FUN_100532d0();
    }
  }
  return;
}


/* END FUNCTION 0x1003a290 */

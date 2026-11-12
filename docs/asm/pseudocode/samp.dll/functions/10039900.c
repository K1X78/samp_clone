/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039900
 * Name: FUN_10039900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039900(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  sbyte sVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar6 = param_2 >> 5;
  if (uVar6 != 0) {
    iVar3 = 7 - uVar6;
    puVar8 = param_1;
    if (-1 < iVar3) {
      puVar7 = param_1 + iVar3 + uVar6;
      do {
        *puVar7 = param_1[iVar3];
        iVar3 = iVar3 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar3);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if ((param_2 & 0x1f) != 0) {
    uVar6 = *param_1;
    uVar1 = param_1[1];
    sVar4 = (sbyte)(param_2 & 0x1f);
    *param_1 = uVar6 << sVar4;
    bVar5 = 0x20 - sVar4;
    uVar2 = param_1[2];
    param_1[1] = uVar1 << sVar4 | uVar6 >> (bVar5 & 0x1f);
    uVar6 = param_1[3];
    param_1[2] = uVar2 << sVar4 | uVar1 >> (bVar5 & 0x1f);
    uVar1 = param_1[4];
    param_1[3] = uVar6 << sVar4 | uVar2 >> (bVar5 & 0x1f);
    uVar2 = param_1[5];
    param_1[4] = uVar1 << sVar4 | uVar6 >> (bVar5 & 0x1f);
    uVar6 = param_1[6];
    param_1[5] = uVar2 << sVar4 | uVar1 >> (bVar5 & 0x1f);
    param_1[6] = uVar6 << sVar4 | uVar2 >> (bVar5 & 0x1f);
    param_1[7] = param_1[7] << sVar4 | uVar6 >> (bVar5 & 0x1f);
  }
  return;
}


/* END FUNCTION 0x10039900 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027ab0
 * Name: FUN_10027ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10027ab0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x1c) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x18);
    pbVar2 = param_2;
    pbVar6 = pbVar5;
LAB_10027ac6:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_10027aea;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_10027ac6;
        }
        iVar3 = 0;
      }
      else {
LAB_10027aea:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar6 + 0x24;
      pbVar2 = param_2;
      pbVar6 = pbVar5;
    } while (uVar4 < *(uint *)(param_1 + 0x1c));
  }
  return 0xffffffff;
}


/* END FUNCTION 0x10027ab0 */

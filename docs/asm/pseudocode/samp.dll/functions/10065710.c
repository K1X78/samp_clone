/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065710
 * Name: FUN_10065710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10065710(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  __strlwr((char *)param_2);
  pbVar1 = param_1 + 0x8305;
  iVar7 = 0;
  if (0 < *(int *)pbVar1) {
    pbVar5 = param_1 + 0x7a00;
    do {
      pbVar3 = param_2;
      pbVar6 = param_1;
      if (*(int *)pbVar5 != 0) {
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_10065774:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_10065779;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_10065774;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_10065779:
        if (iVar4 == 0) {
          return iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      pbVar5 = pbVar5 + 4;
      param_1 = param_1 + 0x3d;
    } while (iVar7 < *(int *)pbVar1);
  }
  return -1;
}


/* END FUNCTION 0x10065710 */

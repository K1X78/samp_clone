/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1b60
 * Name: FUN_100f1b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined ** FUN_100f1b60(byte *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  ppuVar6 = &PTR_DAT_10129e98;
  do {
    pbVar3 = *ppuVar6;
    pbVar5 = param_1;
    do {
      bVar2 = *pbVar3;
      bVar7 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_100f1ba8:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100f1bad;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar7 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_100f1ba8;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_100f1bad:
    if ((iVar4 == 0) || (iVar4 = FUN_100de830(ppuVar6[1],param_1), iVar4 != 0)) {
      return ppuVar6;
    }
    ppuVar1 = ppuVar6 + 2;
    ppuVar6 = ppuVar6 + 2;
    if (*ppuVar1 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}


/* END FUNCTION 0x100f1b60 */

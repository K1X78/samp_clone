/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d1c0
 * Name: FUN_0046d1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046d1c0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  pbVar6 = (byte *)((int)this + 0x40);
  pbVar2 = param_1;
  pbVar5 = pbVar6;
LAB_0046d1d6:
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 == *pbVar6) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0046d1fa;
        pbVar6 = pbVar6 + 2;
        pbVar2 = pbVar2 + 2;
        if (bVar1 != 0) goto LAB_0046d1d6;
      }
      uVar3 = 0;
    }
    else {
LAB_0046d1fa:
      uVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (uVar3 == 0) goto LAB_0046d20f;
    uVar7 = uVar7 + 1;
    pbVar6 = pbVar5 + 0xff;
    pbVar2 = param_1;
    pbVar5 = pbVar6;
    if (0xf < (int)uVar7) {
LAB_0046d20f:
      if ((uVar7 != 0x10) && (*(int *)((int)this + uVar7 * 4) != 0)) {
        uVar4 = FUN_0046acc0(this,uVar7);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      return uVar3 & 0xffffff00;
    }
  } while( true );
}


/* END FUNCTION 0x0046d1c0 */

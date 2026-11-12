/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b98a0
 * Name: FUN_100b98a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b98a0(short *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  
  fVar2 = (float)(int)*param_1 * 0.0078125;
  fVar3 = (float)(int)param_1[1] * 0.0078125;
  fVar4 = (float)(int)param_1[2] * 0.0078125;
  fVar1 = *param_2;
  sVar6 = param_1[2] >> 0xf;
  uVar5 = CONCAT22(sVar6,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 >= fVar1) {
    fVar1 = param_2[3];
    uVar5 = CONCAT22(sVar6,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      fVar1 = param_2[1];
      uVar5 = CONCAT22(sVar6,(ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10
                             | (ushort)(fVar3 == fVar1) << 0xe);
      if (fVar3 >= fVar1) {
        fVar1 = param_2[4];
        uVar5 = CONCAT22(sVar6,(ushort)(fVar3 < fVar1) << 8 |
                               (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                               (ushort)(fVar3 == fVar1) << 0xe);
        if (fVar3 < fVar1 != (fVar3 == fVar1)) {
          fVar1 = param_2[2];
          uVar5 = CONCAT22(sVar6,(ushort)(fVar4 < fVar1) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar4 == fVar1) << 0xe);
          if (fVar4 >= fVar1) {
            fVar1 = param_2[5];
            uVar5 = CONCAT22(sVar6,(ushort)(fVar4 < fVar1) << 8 |
                                   (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                                   (ushort)(fVar4 == fVar1) << 0xe);
            if (fVar4 < fVar1 != (fVar4 == fVar1)) {
              return CONCAT31((int3)((uint)uVar5 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar5;
}


/* END FUNCTION 0x100b98a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d080
 * Name: FUN_1007d080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d080(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  FUN_1007cbc0();
  fVar3 = (float10)FUN_10078e30();
  FUN_1007cbc0();
  iVar1 = FUN_10078ec0();
  FUN_10095e30();
  fVar4 = (float10)FUN_10093150();
  dVar6 = (double)fVar4;
  FUN_1007cbc0();
  FUN_10078e80();
  fVar4 = (float10)dVar6;
  if ((float10)1.0 < fVar4 - (float10)(double)fVar3) {
    fVar5 = (float10)(iVar1 + 1);
    if (iVar1 + 1 < 0) {
      fVar5 = fVar5 + (float10)4294967296.0;
    }
    FUN_1007cbc0();
    FUN_10078f00();
    FUN_1007cbc0(dVar6);
    FUN_10078df0(dVar6);
    FUN_1007cbc0();
    FUN_10078e80();
    FUN_1007cbc0();
    iVar1 = FUN_1007b3c0();
    FUN_1007cbc0();
    uVar2 = FUN_1007b380();
    FUN_1007bc80(iVar1,0x100,uVar2,(double)(float)(fVar5 / (fVar4 - (float10)(double)fVar3)));
    *(undefined1 *)(iVar1 + 0xff) = 0;
    return;
  }
  return;
}


/* END FUNCTION 0x1007d080 */

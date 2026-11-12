/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2de0
 * Name: FUN_100d2de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d2de0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  bool bVar3;
  
  if ((unaff_ESI[0xed] + unaff_ESI[0xe9] == 0) && (unaff_ESI[0x12] == 0)) {
    if (*(code **)(unaff_ESI[200] + 0x38) == (code *)0x0) {
      iVar2 = FUN_100cd750(unaff_ESI[0x66],0xffffffff,0xffffffff,0);
      bVar3 = iVar2 != 0;
    }
    else {
      bVar1 = (**(code **)(unaff_ESI[200] + 0x38))();
      bVar3 = (bool)(bVar1 & 1);
    }
    if (bVar3 != false) {
      *unaff_ESI = unaff_EBX;
      FUN_100d8ae0();
      FUN_100d2d00();
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100d2de0 */

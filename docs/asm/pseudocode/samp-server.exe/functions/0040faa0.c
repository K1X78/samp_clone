/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040faa0
 * Name: FUN_0040faa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0040faa0(void)

{
  uint uVar1;
  uint uVar2;
  byte *unaff_EBX;
  int iVar3;
  
  if (((&DAT_004b29c8)[*unaff_EBX] & 4) != 0) {
    uVar1 = _atol((char *)unaff_EBX);
    return uVar1;
  }
  uVar2 = FUN_00408380((char *)unaff_EBX);
  iVar3 = 0;
  uVar1 = uVar2;
  do {
    if ((byte)(&DAT_004b33fc)[iVar3] == uVar2) {
      uVar1 = FUN_004084a0((byte *)("onoffalseyestruefull" + (byte)(&DAT_004b33f4)[iVar3]),unaff_EBX
                           ,uVar2);
      if (uVar1 == 0) {
        return (uint)(byte)(&DAT_004b3404)[iVar3];
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* END FUNCTION 0x0040faa0 */

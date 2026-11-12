/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fba0
 * Name: FUN_0040fba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040fba0(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_ESI;
  
  bVar1 = *unaff_ESI;
  if (('/' < (char)bVar1) && ((char)bVar1 < '3')) {
    return (char)bVar1 + -0x30;
  }
  iVar2 = FUN_00408450(unaff_ESI,&DAT_004b6adc);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = FUN_00408450(unaff_ESI,(byte *)"memory");
  return (-(uint)(iVar2 != 0) & 0xfffffffe) + 2;
}


/* END FUNCTION 0x0040fba0 */

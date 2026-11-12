/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fb40
 * Name: FUN_0040fb40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0040fb40(void)

{
  int iVar1;
  uint uVar2;
  byte *unaff_ESI;
  
  iVar1 = FUN_00408450(unaff_ESI,&DAT_004b6ad4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00408450(unaff_ESI,&DAT_004b6acc);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_00408450(unaff_ESI,(byte *)"incremental");
  if (iVar1 == 0) {
    return 2;
  }
  uVar2 = _atol((char *)unaff_ESI);
  if (((int)uVar2 < 0) || (2 < (int)uVar2)) {
    uVar2 = 0;
  }
  return uVar2 & 0xff;
}


/* END FUNCTION 0x0040fb40 */

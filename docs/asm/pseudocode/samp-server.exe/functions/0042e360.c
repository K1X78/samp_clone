/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e360
 * Name: FUN_0042e360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042e360(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_EDI;
  
  uVar2 = FUN_0040fba0();
  iVar1 = *unaff_EDI;
  if (*(byte *)(iVar1 + 0x1d) != uVar2) {
    iVar3 = FUN_0042e300();
    if (iVar3 != 0) {
      return 1;
    }
    *(char *)(iVar1 + 0x1d) = (char)uVar2;
  }
  return 0;
}


/* END FUNCTION 0x0042e360 */

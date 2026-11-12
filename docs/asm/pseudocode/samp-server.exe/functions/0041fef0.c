/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fef0
 * Name: FUN_0041fef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041fef0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 7) & 0x10) == 0) {
    iVar1 = FUN_0041fe60();
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = unaff_ESI[6];
  if ((*(byte *)((int)unaff_ESI + 0x1d) & 0x40) != 0) {
    iVar1 = iVar1 + *unaff_ESI;
  }
  return iVar1;
}


/* END FUNCTION 0x0041fef0 */

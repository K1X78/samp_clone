/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417910
 * Name: FUN_00417910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_00417910(void)

{
  undefined1 uVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar2 = *unaff_ESI;
  if (iVar2 < 0) {
    return 0;
  }
  uVar1 = *(undefined1 *)((int)unaff_ESI + iVar2 * 0x10 + 0xe);
  FUN_004177f0(unaff_ESI + iVar2 * 4 + 4,uVar1);
  *unaff_ESI = *unaff_ESI + -1;
  return uVar1;
}


/* END FUNCTION 0x00417910 */

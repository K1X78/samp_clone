/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004107c0
 * Name: FUN_004107c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_004107c0(void)

{
  int iVar1;
  char *unaff_ESI;
  
  if (*unaff_ESI == -0x69) {
    iVar1 = FUN_00408450(*(byte **)(unaff_ESI + 4),(byte *)"match");
    if ((iVar1 == 0) && (**(int **)(unaff_ESI + 0x10) == 2)) {
      return **(char **)((*(int **)(unaff_ESI + 0x10))[3] + 0x14) == -0x68;
    }
  }
  return false;
}


/* END FUNCTION 0x004107c0 */

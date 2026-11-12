/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004195e0
 * Name: FUN_004195e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004195e0(undefined **param_1)

{
  int unaff_ESI;
  char *unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + -1;
    *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 1;
    if (*(int *)(unaff_ESI + 0x28) != 0) {
      FUN_00412af0("\n",1);
    }
    if (unaff_EDI != (char *)0x0) {
      FUN_00412af0(unaff_EDI,0xffffffff);
    }
    FUN_00417bf0(unaff_ESI + 0x1c,1,param_1,(double *)&stack0x00000008);
    if (*(char *)(unaff_ESI + 0x34) != '\0') {
      *(undefined4 *)(unaff_ESI + 0x18) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x004195e0 */

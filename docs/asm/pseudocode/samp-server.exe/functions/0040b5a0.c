/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b5a0
 * Name: FUN_0040b5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040b5a0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0xb) == '\0') {
    uVar1 = FUN_00407b90(*(int **)(unaff_ESI + 0x38));
    *(undefined4 *)(unaff_ESI + 0x78) = uVar1;
  }
  if (*(uint *)(unaff_ESI + 0x78) < 0x20) {
    *(undefined4 *)(unaff_ESI + 0x78) = 0x200;
  }
  if (0x10000 < *(uint *)(unaff_ESI + 0x78)) {
    *(undefined4 *)(unaff_ESI + 0x78) = 0x10000;
  }
  return;
}


/* END FUNCTION 0x0040b5a0 */

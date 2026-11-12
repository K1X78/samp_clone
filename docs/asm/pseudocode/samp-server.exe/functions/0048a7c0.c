/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a7c0
 * Name: FUN_0048a7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048a7c0(void)

{
  int in_EAX;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x1f) == '\0') {
    (**(code **)(in_EAX + 4))();
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
  }
  return;
}


/* END FUNCTION 0x0048a7c0 */

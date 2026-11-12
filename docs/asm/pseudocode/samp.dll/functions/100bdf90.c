/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdf90
 * Name: FUN_100bdf90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100bdf90(void)

{
  int in_EAX;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x1f) == '\0') {
    (**(code **)(in_EAX + 4))();
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
  }
  return;
}


/* END FUNCTION 0x100bdf90 */

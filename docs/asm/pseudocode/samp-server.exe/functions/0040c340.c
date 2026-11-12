/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c340
 * Name: FUN_0040c340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040c340(void)

{
  int *piVar1;
  int in_EAX;
  
  if (*(char *)(in_EAX + 9) != '\0') {
    piVar1 = (int *)(in_EAX + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0040c2a0();
    }
  }
  return;
}


/* END FUNCTION 0x0040c340 */

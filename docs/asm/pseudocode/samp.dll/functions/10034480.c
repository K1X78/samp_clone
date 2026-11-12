/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034480
 * Name: FUN_10034480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10034480(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    cVar1 = FUN_100331a0(&stack0x00000004);
    if (cVar1 != '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return 0xffffffff;
}


/* END FUNCTION 0x10034480 */

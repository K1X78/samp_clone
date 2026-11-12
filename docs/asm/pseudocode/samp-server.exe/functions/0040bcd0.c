/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bcd0
 * Name: FUN_0040bcd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040bcd0(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (*(char *)(in_EAX + 0x1c) != '\0') {
    return 0;
  }
  uVar1 = FUN_00407bc0();
  return uVar1;
}


/* END FUNCTION 0x0040bcd0 */

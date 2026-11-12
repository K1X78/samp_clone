/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004191d0
 * Name: FUN_004191d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_004191d0(void)

{
  int *in_EAX;
  undefined4 uVar1;
  
  if (*(int *)in_EAX[0x10] == 0) {
    if ((*(char *)((int)in_EAX + 5) != '\x04') && (*(char *)((int)in_EAX + 0x17) == '\0')) {
      uVar1 = FUN_0040b630((int *)in_EAX[0x10],in_EAX);
      return uVar1;
    }
    FUN_00415610();
  }
  return 0;
}


/* END FUNCTION 0x004191d0 */

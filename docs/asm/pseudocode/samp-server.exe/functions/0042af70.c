/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042af70
 * Name: FUN_0042af70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0042af70(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  
  do {
    if (*(char *)(*(int *)(in_EAX + 0x60 + *(short *)(in_EAX + 0x5c) * 4) + 3) != '\0') {
      return 0;
    }
    FUN_00408f80();
    iVar1 = FUN_0042add0(extraout_ECX);
  } while (iVar1 == 0);
  return iVar1;
}


/* END FUNCTION 0x0042af70 */

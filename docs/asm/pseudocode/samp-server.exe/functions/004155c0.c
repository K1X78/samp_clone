/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004155c0
 * Name: FUN_004155c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004155c0(void)

{
  char *in_EAX;
  uint uVar1;
  uint *unaff_EBX;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  *unaff_EBX = 0;
  if (*in_EAX != '\0') {
    iVar2 = 0;
    while( true ) {
      uVar1 = FUN_00410a30(&local_4);
      if (local_4 == 0x85) break;
      in_EAX = in_EAX + uVar1;
      iVar2 = iVar2 + uVar1;
      if (*in_EAX == '\0') {
        return iVar2;
      }
    }
    *unaff_EBX = uVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x004155c0 */

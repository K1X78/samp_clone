/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423c30
 * Name: FUN_00423c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00423c30(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  uint unaff_EDI;
  
  for (; in_EAX != 0; in_EAX = *(int *)(in_EAX + 0x2c)) {
    iVar1 = FUN_0040d0d0();
    if (((iVar1 == 0) && (unaff_EDI < *(uint *)(in_EAX + 0x10))) &&
       (iVar1 = FUN_00423a70(in_EAX,unaff_EDI,unaff_EBX), iVar1 != 0)) {
      *(int *)(in_EAX + 0x1c) = iVar1;
    }
  }
  return;
}


/* END FUNCTION 0x00423c30 */

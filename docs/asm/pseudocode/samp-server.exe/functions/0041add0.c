/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041add0
 * Name: FUN_0041add0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041add0(void)

{
  int *in_EAX;
  int iVar1;
  byte *unaff_ESI;
  
  if (((*(char *)(*in_EAX + 0x7c) == '\0') && (*(char *)((int)in_EAX + 0x13) == '\0')) &&
     ((*(uint *)(*in_EAX + 0xc) & 0x10000) == 0)) {
    iVar1 = FUN_004084a0(unaff_ESI,(byte *)"sqlite_",7);
    if (iVar1 == 0) {
      FUN_00418b00((undefined **)"object name reserved for internal use: %s");
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0041add0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ce30
 * Name: FUN_0040ce30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040ce30(void)

{
  int in_EAX;
  undefined4 *unaff_EDI;
  
  if (*(char *)(in_EAX + 0x43) != '\x01') {
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    return 0;
  }
  FUN_0040ce00();
  *unaff_EDI = *(undefined4 *)(in_EAX + 0x28);
  unaff_EDI[1] = *(undefined4 *)(in_EAX + 0x2c);
  return 0;
}


/* END FUNCTION 0x0040ce30 */

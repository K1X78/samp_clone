/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409170
 * Name: FUN_00409170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00409170(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  uint *unaff_ESI;
  byte *unaff_EDI;
  
  if (unaff_ESI[3] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00409030(unaff_EDI,in_EAX);
    uVar1 = uVar1 % *unaff_ESI;
  }
  puVar2 = FUN_004090c0((int)unaff_ESI,uVar1,unaff_EDI);
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2[2];
  }
  return 0;
}


/* END FUNCTION 0x00409170 */

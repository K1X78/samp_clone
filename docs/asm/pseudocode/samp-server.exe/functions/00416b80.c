/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416b80
 * Name: FUN_00416b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00416b80(void)

{
  int in_EAX;
  int unaff_EBX;
  void *unaff_ESI;
  
  if ((*(int *)(in_EAX + 0x34) != 0) && (unaff_EBX != 0)) {
    FUN_00414e70(*(int *)(in_EAX + 0x34),0x14);
    FUN_00414e50(0x72);
    FUN_00414e70(0,1);
    FUN_0040d680(unaff_ESI);
  }
  return;
}


/* END FUNCTION 0x00416b80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416d80
 * Name: FUN_00416d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00416d80(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 uVar2;
  
  if ((in_EAX[0x83] != 0) && (in_EAX[0x80] != 0)) {
    iVar1 = *in_EAX;
    uVar2 = FUN_00412ab0();
    FUN_00416cf0(iVar1,uVar2);
  }
  return;
}


/* END FUNCTION 0x00416d80 */

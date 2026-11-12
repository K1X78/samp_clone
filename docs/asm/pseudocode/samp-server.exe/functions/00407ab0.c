/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407ab0
 * Name: FUN_00407ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00407ab0(void)

{
  undefined4 uVar1;
  int *unaff_ESI;
  
  uVar1 = 0;
  if (*unaff_ESI != 0) {
    uVar1 = (**(code **)(*unaff_ESI + 4))();
    *unaff_ESI = 0;
  }
  return uVar1;
}


/* END FUNCTION 0x00407ab0 */

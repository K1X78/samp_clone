/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c6d0
 * Name: FUN_0040c6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040c6d0(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  undefined3 extraout_var;
  uint *extraout_ECX;
  uint extraout_EDX;
  
  if (*(int *)(in_EAX + 0x38) == 0) {
    return 0;
  }
  uVar2 = FUN_0040b9a0();
  if ((extraout_EDX <= uVar2) &&
     (bVar1 = FUN_00409e90(extraout_ECX), CONCAT31(extraout_var,bVar1) == 0)) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0040c6d0 */

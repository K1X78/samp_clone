/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a7d0
 * Name: FUN_0041a7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041a7d0(void)

{
  int iVar1;
  int *unaff_EBX;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = FUN_0040f840(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar2 = FUN_0041a790(*unaff_EBX);
  }
  return uVar2;
}


/* END FUNCTION 0x0041a7d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a980
 * Name: FUN_0041a980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041a980(void)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  
  while( true ) {
    if (in_EAX == 0) {
      return 0;
    }
    iVar1 = FUN_0041a910(unaff_EBX,*(int *)(in_EAX + 8));
    if (((iVar1 != 0) || (iVar1 = FUN_004161c0(unaff_EBX,*(int *)(in_EAX + 0x14)), iVar1 != 0)) ||
       (iVar1 = FUN_0040ece0(unaff_EBX), iVar1 != 0)) break;
    in_EAX = *(int *)(in_EAX + 0x20);
  }
  return 1;
}


/* END FUNCTION 0x0041a980 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f3d40
 * Name: FUN_100f3d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100f3d40(void)

{
  int iVar1;
  undefined1 local_4 [4];
  
  iVar1 = (**(code **)(DAT_102acadc + 0x44))("WDigest",local_4);
  return iVar1 == 0;
}


/* END FUNCTION 0x100f3d40 */

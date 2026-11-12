/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4dc0
 * Name: FUN_100f4dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100f4dc0(void)

{
  int iVar1;
  undefined1 local_4 [4];
  
  iVar1 = (**(code **)(DAT_102acadc + 0x44))("Negotiate",local_4);
  return iVar1 == 0;
}


/* END FUNCTION 0x100f4dc0 */

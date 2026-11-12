/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8500
 * Name: FUN_100d8500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_100d8500(void)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return CONCAT44((DVar1 % 1000) * 1000,DVar1 / 1000);
}


/* END FUNCTION 0x100d8500 */

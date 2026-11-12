/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085e60
 * Name: FUN_10085e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10085e60(void)

{
  DWORD DVar1;
  
  if ((DAT_10181a6b == '\0') && (DAT_1017f696 == '\0')) {
    DVar1 = GetTickCount();
    return (int)(DVar1 - _DAT_1017f698) < 300;
  }
  return true;
}


/* END FUNCTION 0x10085e60 */

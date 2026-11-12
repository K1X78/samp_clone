/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0d50
 * Name: FUN_100e0d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100e0d50(undefined4 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  CloseHandle((HANDLE)*param_1);
  *param_1 = 0;
  return DVar1 == 0;
}


/* END FUNCTION 0x100e0d50 */

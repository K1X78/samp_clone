/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd720
 * Name: FUN_100cd720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cd720(DWORD param_1)

{
  if (param_1 != 0) {
    if ((int)param_1 < 0) {
      WSASetLastError(0x2726);
      return 0xffffffff;
    }
    Sleep(param_1);
  }
  return 0;
}


/* END FUNCTION 0x100cd720 */

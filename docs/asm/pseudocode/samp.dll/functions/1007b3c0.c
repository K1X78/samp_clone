/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007b3c0
 * Name: FUN_1007b3c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1007b3c0(int param_1)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return param_1 + 0x4bd;
}


/* END FUNCTION 0x1007b3c0 */

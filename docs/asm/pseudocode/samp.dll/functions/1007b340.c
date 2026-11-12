/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007b340
 * Name: FUN_1007b340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1007b340(int param_1)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return param_1 + 0x3b4;
}


/* END FUNCTION 0x1007b340 */

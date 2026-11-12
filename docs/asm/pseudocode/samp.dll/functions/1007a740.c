/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007a740
 * Name: FUN_1007a740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_1007a740(int param_1)

{
  float fVar1;
  
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  fVar1 = *(float *)(param_1 + 0x250);
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return (float10)fVar1;
}


/* END FUNCTION 0x1007a740 */

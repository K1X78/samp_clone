/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10078560
 * Name: FUN_10078560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10078560(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return uVar1;
}


/* END FUNCTION 0x10078560 */

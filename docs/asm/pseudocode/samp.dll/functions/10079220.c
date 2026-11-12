/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10079220
 * Name: FUN_10079220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10079220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined4 *)(param_1 + 499) = param_2;
  *(undefined4 *)(param_1 + 0x1f7) = param_3;
  *(undefined4 *)(param_1 + 0x1fb) = param_4;
  *(undefined4 *)(param_1 + 0x1ff) = param_5;
  *(undefined4 *)(param_1 + 0x203) = param_6;
  *(undefined4 *)(param_1 + 0x207) = param_7;
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return;
}


/* END FUNCTION 0x10079220 */

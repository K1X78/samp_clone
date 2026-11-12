/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b63c0
 * Name: FUN_100b63c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong __fastcall
FUN_100b63c0(undefined4 param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  if (param_4 < *(uint *)(param_3 + 4)) {
    return (ulonglong)param_2 << 0x20;
  }
  (*(code *)0x537ce0)(param_3 + 0x20,*(uint *)(param_3 + 4) - 0x18,param_5);
  return 1;
}


/* END FUNCTION 0x100b63c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015fd0
 * Name: FUN_10015fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10015fd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_1009f210();
    if (iVar1 != 0) {
      iVar1 = FUN_100ac1f0();
      if (iVar1 == 0) {
        iVar1 = FUN_100ac260();
        if (iVar1 == 0) {
          return *(undefined4 *)(param_1 + 0x1d1);
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x10015fd0 */

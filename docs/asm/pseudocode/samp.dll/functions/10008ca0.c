/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008ca0
 * Name: FUN_10008ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10008ca0(int param_1,byte param_2)

{
  undefined4 *puVar1;
  
  if (param_2 < 100) {
    puVar1 = (undefined4 *)(param_1 + 0x23d + (uint)param_2 * 4);
    FUN_100b1f10(&DAT_101179c8,*puVar1);
    *puVar1 = 0;
  }
  return;
}


/* END FUNCTION 0x10008ca0 */

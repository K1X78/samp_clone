/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1570
 * Name: FUN_100a1570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a1570(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x69) == 0) {
    _DAT_00b7cb84 = param_2 & 0x3fffffff;
    DAT_1018e53c = 1;
  }
  return;
}


/* END FUNCTION 0x100a1570 */

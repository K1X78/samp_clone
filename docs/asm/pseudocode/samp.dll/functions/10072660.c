/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072660
 * Name: FUN_10072660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10072660(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_100a0530(0,1);
  if (*(int *)(DAT_102aca14 + 0x14e0) != 0) {
    FUN_10068fc0();
    FUN_10068ec0();
  }
  if (*(int *)(param_1 + 0x78) == 2) {
    FUN_10072560(param_2 != 0);
  }
  if (*(int *)(param_1 + 0x78) == 1) {
    FUN_10072350(param_2 != 0);
  }
  return;
}


/* END FUNCTION 0x10072660 */

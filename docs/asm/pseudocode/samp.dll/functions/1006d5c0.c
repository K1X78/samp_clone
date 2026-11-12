/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d5c0
 * Name: FUN_1006d5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006d5c0(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    if (param_2 == 0) {
      FUN_100a0530(0,1);
      if (*(int *)(DAT_102aca14 + 0x14e0) != 0) {
        FUN_10068fc0();
        FUN_10068ec0();
      }
    }
    if (*param_1 != 0) goto LAB_1006d62e;
  }
  if (param_2 != 0) {
    FUN_100a0530(0,1);
    *(undefined4 *)(DAT_102aca3c + 0x65) = 0;
    FUN_100a0410();
  }
LAB_1006d62e:
  *param_1 = param_2;
  return;
}


/* END FUNCTION 0x1006d5c0 */

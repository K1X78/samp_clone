/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091980
 * Name: FUN_10091980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10091980(int param_1)

{
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_10091360();
  }
  if (*(int *)(param_1 + 0x24c) != 0) {
    FUN_10091980();
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    FUN_10091980();
  }
  if (*(undefined4 **)(param_1 + 0x244) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x244))(1);
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x248) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x248))(1);
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x24c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24c))(1);
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  return 0;
}


/* END FUNCTION 0x10091980 */

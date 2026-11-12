/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007cb0
 * Name: FUN_10007cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10007cb0(int param_1,byte param_2)

{
  if (((param_2 < 0x80) && (*(int *)(param_1 + 0x200 + (uint)param_2 * 4) != 0)) &&
     (*(int *)(param_1 + (uint)param_2 * 4) != 0)) {
    if (*(char *)(param_1 + 0x400) != -0x80) {
      FUN_100a7260();
    }
    FUN_100a7330();
    *(byte *)(param_1 + 0x400) = param_2;
    *(undefined1 *)(param_1 + 0x401) = 0;
  }
  return;
}


/* END FUNCTION 0x10007cb0 */

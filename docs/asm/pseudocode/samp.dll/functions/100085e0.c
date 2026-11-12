/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100085e0
 * Name: FUN_100085e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100085e0(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x3d5) + 0x2b) != '\0') {
    FUN_100aa800();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 5) = 0x469c4000;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 9) = 0xc69c4000;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0xd) = 0x469c4000;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x11) = 0xc69c4000;
  return;
}


/* END FUNCTION 0x100085e0 */

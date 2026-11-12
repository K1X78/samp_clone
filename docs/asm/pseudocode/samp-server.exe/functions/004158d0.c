/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004158d0
 * Name: FUN_004158d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004158d0(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 3) & 0x20) == 0) {
      FUN_004158d0(param_1,*(int *)(param_2 + 8));
      FUN_004158d0(param_1,*(int *)(param_2 + 0xc));
      if (((*(byte *)(param_2 + 3) & 0x10) == 0) && ((*(byte *)(param_2 + 0x22) & 1) != 0)) {
        FUN_00408130(param_1);
      }
      if ((*(byte *)(param_2 + 3) & 8) == 0) {
        FUN_0040e580();
      }
      else {
        FUN_0040fce0(param_1,*(int *)(param_2 + 0x10));
      }
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      FUN_00408130(param_1);
    }
  }
  return;
}


/* END FUNCTION 0x004158d0 */

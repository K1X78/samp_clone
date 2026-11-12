/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471e80
 * Name: FUN_00471e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00471e80(undefined4 param_1,int param_2)

{
  void *this;
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (this = *(void **)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
     this != (void *)0x0)) {
    FUN_004879b0(this,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00471e80 */

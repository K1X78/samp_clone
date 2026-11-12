/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472f70
 * Name: FUN_00472f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472f70(undefined4 param_1,int param_2)

{
  void *this;
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (this = *(void **)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
     this != (void *)0x0)) {
    FUN_00485c20(this,*(byte *)(param_2 + 8),*(byte *)(param_2 + 0xc));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00472f70 */

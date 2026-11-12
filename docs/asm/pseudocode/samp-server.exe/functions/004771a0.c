/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004771a0
 * Name: FUN_004771a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004771a0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (*(void **)(DAT_004fc438 + 0x24) != (void *)0x0) {
    uVar1 = FUN_00464970(*(void **)(DAT_004fc438 + 0x24),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                         *(undefined4 *)(param_2 + 0x10));
    if ((short)uVar1 != -1) {
      return uVar1 & 0xffff;
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004771a0 */

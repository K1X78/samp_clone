/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004707e0
 * Name: FUN_004707e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_004707e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(void **)(DAT_004fc438 + 0x10) == (void *)0x0) {
    return false;
  }
  iVar1 = FUN_004658c0(*(void **)(DAT_004fc438 + 0x10),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                       *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18));
  return iVar1 != -1;
}


/* END FUNCTION 0x004707e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479700
 * Name: FUN_00479700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479700(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) &&
     (*(int *)((int)*(void **)(DAT_004fc438 + 0x28) + (uint)uVar1 * 4 + 4000) != 0)) {
    FUN_00464810(*(void **)(DAT_004fc438 + 0x28),uVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00479700 */

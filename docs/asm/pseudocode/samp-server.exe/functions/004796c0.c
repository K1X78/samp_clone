/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004796c0
 * Name: FUN_004796c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_004796c0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_2 + 8);
  local_8 = *(undefined4 *)(param_2 + 0xc);
  local_4 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = FUN_004645d0(*(void **)(DAT_004fc438 + 0x28),*(int *)(param_2 + 4),&local_c,
                       *(undefined4 *)(param_2 + 0x14));
  return uVar1;
}


/* END FUNCTION 0x004796c0 */

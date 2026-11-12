/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479890
 * Name: FUN_00479890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479890(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if ((DAT_004fc438 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) {
    if ((*(int *)(*(int *)(DAT_004fc438 + 0x28) + 4000 + (uint)uVar1 * 4) != 0) && (uVar1 < 1000)) {
      return *(undefined4 *)(*(int *)(DAT_004fc438 + 0x28) + (uint)uVar1 * 4);
    }
  }
  return 0;
}


/* END FUNCTION 0x00479890 */

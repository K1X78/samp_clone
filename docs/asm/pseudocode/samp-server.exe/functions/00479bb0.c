/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479bb0
 * Name: FUN_00479bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_00479bb0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(DAT_004fc438 + 0x28) != 0) && (*(ushort *)(param_2 + 4) < 1000)) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x28) + 8000 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    return *(char *)(iVar1 + 0xd4) != '\0';
  }
  return false;
}


/* END FUNCTION 0x00479bb0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477480
 * Name: FUN_00477480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00477480(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if (*(int *)(DAT_004fc438 + 0x24) != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 0x400) && (*(int *)(*(int *)(DAT_004fc438 + 0x24) + 0x4000 + (uint)uVar1 * 4) != 0)
       ) {
      FUN_004650c0(CONCAT22((short)((uint)DAT_004fc438 >> 0x10),uVar1));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00477480 */

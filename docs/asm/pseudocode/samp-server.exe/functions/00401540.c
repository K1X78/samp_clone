/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401540
 * Name: FUN_00401540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401540(int *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(short *)(iVar1 + 10) == 8) {
    *param_2 = (uint)*(ushort *)(*(int *)(iVar1 + 0x34) + iVar1);
    return 0;
  }
  *param_2 = (int)*(short *)(iVar1 + 10) - 4;
  return 0;
}


/* END FUNCTION 0x00401540 */

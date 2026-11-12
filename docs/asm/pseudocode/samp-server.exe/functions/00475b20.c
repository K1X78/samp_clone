/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475b20
 * Name: FUN_00475b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_00475b20(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(void **)(DAT_004fc438 + 0x18) != (void *)0x0) {
    iVar1 = FUN_00465260(*(void **)(DAT_004fc438 + 0x18),*(byte *)(param_2 + 4));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* END FUNCTION 0x00475b20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419650
 * Name: FUN_00419650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00419650(undefined4 param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  
  if (in_EAX != 0) {
    if (*(uint *)(param_2 + 8) < in_EAX) {
      FUN_004195e0((undefined **)"invalid page number %d");
      return 1;
    }
    if (*(int *)(*(int *)(param_2 + 0xc) + in_EAX * 4) == 1) {
      FUN_004195e0((undefined **)"2nd reference to page %d");
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + in_EAX * 4);
      *(int *)(*(int *)(param_2 + 0xc) + in_EAX * 4) = iVar1 + 1;
      if (iVar1 < 2) {
        return 0;
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x00419650 */

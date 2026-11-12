/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442e70
 * Name: FUN_00442e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00442e70(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00442730();
  FUN_0041aca0(*(int **)(in_EAX + 0x14));
  *(int *)(in_EAX + 0x14) = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x20) = *(short *)(iVar1 + 0x20) + 1;
  }
  iVar2 = FUN_0041cb60(in_EAX + 8);
  if (iVar2 != 0) {
    return 0;
  }
  return iVar1;
}


/* END FUNCTION 0x00442e70 */

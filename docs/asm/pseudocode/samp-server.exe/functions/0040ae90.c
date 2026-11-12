/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ae90
 * Name: FUN_0040ae90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ae90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = 1;
  iVar2 = param_1;
  while (iVar1 = iVar3, iVar1 != 0) {
    param_1 = *(int *)(iVar1 + 8);
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = FUN_0040ae30(&param_1,iVar4);
    *(int *)(iVar1 + 8) = iVar3;
    iVar4 = iVar4 + 1;
    iVar3 = param_1;
    iVar2 = iVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x0040ae90 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004717a0
 * Name: FUN_004717a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004717a0(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (0x36 < *(int *)(param_2 + 4)) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  pcVar1 = FUN_00494420(*(int *)(param_2 + 4));
  iVar2 = FUN_0046fcb0(param_1,*(int *)(param_2 + 8),pcVar1,iVar2);
  return iVar2;
}


/* END FUNCTION 0x004717a0 */

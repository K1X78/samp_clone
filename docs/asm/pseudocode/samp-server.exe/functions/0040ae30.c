/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ae30
 * Name: FUN_0040ae30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ae30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return iVar1;
  }
  if (param_2 == 1) {
    *param_1 = *(int *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    return iVar1;
  }
  iVar2 = FUN_0040ae30(param_1,param_2 + -1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *param_1 = *(int *)(iVar1 + 8);
    iVar2 = FUN_0040ae30(param_1,param_2 + -1);
    *(int *)(iVar1 + 8) = iVar2;
    iVar2 = iVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x0040ae30 */

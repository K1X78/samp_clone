/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404790
 * Name: FUN_00404790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00404790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
    FUN_004030f0(param_1,10);
  }
  iVar2 = *(int *)(param_2 + 8);
  if ((*(int *)(param_2 + 8) <= iVar1) &&
     (iVar2 = *(int *)(param_2 + 0xc), iVar1 <= *(int *)(param_2 + 0xc))) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x00404790 */

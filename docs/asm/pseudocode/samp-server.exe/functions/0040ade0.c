/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ade0
 * Name: FUN_0040ade0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040ade0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar1 = param_1;
  do {
    iVar3 = iVar1;
    if (*(int *)(iVar3 + 0xc) == 0) {
      *piVar2 = iVar3;
    }
    else {
      FUN_0040ade0(*(int *)(iVar3 + 0xc),piVar2,&param_1);
      *(int *)(param_1 + 8) = iVar3;
    }
    piVar2 = (int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 8);
  } while (*(int *)(iVar3 + 8) != 0);
  *param_3 = iVar3;
  return;
}


/* END FUNCTION 0x0040ade0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c4e0
 * Name: FUN_0040c4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c4e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = piVar2[1];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(char *)(iVar1 + 10) == '\0') {
        FUN_0040c280();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}


/* END FUNCTION 0x0040c4e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c5f0
 * Name: FUN_0045c5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0045c5f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = FUN_0045b890(param_1); iVar1 != 0; iVar1 = *(int *)(iVar1 + 200)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 4);
  }
  return iVar2;
}


/* END FUNCTION 0x0045c5f0 */

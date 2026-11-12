/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b4d0
 * Name: FUN_0040b4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040b4d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x84);
  while (iVar1 = iVar1 + -200, 0 < iVar1) {
    iVar2 = iVar2 + (uint)*(byte *)(iVar1 + param_2);
  }
  return iVar2;
}


/* END FUNCTION 0x0040b4d0 */

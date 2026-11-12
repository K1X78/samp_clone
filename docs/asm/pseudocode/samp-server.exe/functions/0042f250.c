/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f250
 * Name: FUN_0042f250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042f250(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = FUN_0040de20(unaff_EDI);
  iVar2 = (int)*(uint *)(iVar1 + 0x48) >> 0x1f;
  if ((iVar2 <= param_2) && ((iVar2 < param_2 || (*(uint *)(iVar1 + 0x48) < param_1)))) {
    FUN_0042ea10(unaff_EDI);
    return 0;
  }
  iVar1 = FUN_004125b0(param_1);
  if (iVar1 == 0) {
    FUN_0042ea40(unaff_EDI);
  }
  return iVar1;
}


/* END FUNCTION 0x0042f250 */

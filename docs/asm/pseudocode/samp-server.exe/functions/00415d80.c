/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415d80
 * Name: FUN_00415d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00415d80(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  
  iVar1 = FUN_0040ec00();
  iVar2 = FUN_00437710(unaff_EBX,param_1,iVar1);
  if (iVar2 == iVar1) {
    *param_2 = iVar1;
    return iVar2;
  }
  FUN_0040ec20(extraout_ECX,(int)unaff_EBX);
  *param_2 = 0;
  return iVar2;
}


/* END FUNCTION 0x00415d80 */

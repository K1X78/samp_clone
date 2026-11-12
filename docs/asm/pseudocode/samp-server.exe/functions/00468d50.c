/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468d50
 * Name: FUN_00468d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00468d50(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char extraout_CL;
  int extraout_ECX;
  char extraout_DL;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    iVar1 = FUN_00468c60(*param_1);
    iVar2 = FUN_00468c60(extraout_DL);
    if ((char)iVar1 != (char)iVar2) {
      FUN_00468c60(*param_2);
      iVar1 = FUN_00468c60(*param_1);
      return (char)iVar1 - extraout_ECX;
    }
    param_1 = param_1 + 1;
  } while ((extraout_CL != '\0') && (param_3 = param_3 + -1, param_2 = param_2 + 1, param_3 != 0));
  return 0;
}


/* END FUNCTION 0x00468d50 */

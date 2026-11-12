/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ad60
 * Name: FUN_0041ad60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0041ad60(int *param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *param_1;
  if ((in_EAX == 0) || (*(int *)(in_EAX + 4) == 0)) {
    iVar1 = *(int *)(iVar1 + 0x74);
    *param_2 = unaff_ESI;
  }
  else {
    if (*(char *)(iVar1 + 0x7c) != '\0') {
      FUN_00418b00((undefined **)"corrupt database");
      param_1[0x10] = param_1[0x10] + 1;
      return -1;
    }
    *param_2 = in_EAX;
    iVar1 = FUN_00416450(iVar1);
    if (iVar1 < 0) {
      FUN_00418b00((undefined **)"unknown database %T");
      param_1[0x10] = param_1[0x10] + 1;
      return -1;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0041ad60 */

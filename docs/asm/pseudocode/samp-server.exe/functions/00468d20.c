/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468d20
 * Name: FUN_00468d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00468d20(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *extraout_ECX;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c60(*param_1);
    *extraout_ECX = (char)iVar2;
    param_1 = extraout_ECX + 1;
    cVar1 = extraout_ECX[1];
  }
  return;
}


/* END FUNCTION 0x00468d20 */

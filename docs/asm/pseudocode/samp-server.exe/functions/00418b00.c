/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418b00
 * Name: FUN_00418b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00418b00(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  iVar2 = FUN_004188c0(param_1,(double *)&stack0x00000008);
  if (*(char *)(iVar1 + 0x21) != '\0') {
    FUN_00408130(iVar1);
    return;
  }
  unaff_EDI[0x10] = unaff_EDI[0x10] + 1;
  FUN_00408130(iVar1);
  unaff_EDI[2] = iVar2;
  unaff_EDI[1] = 1;
  return;
}


/* END FUNCTION 0x00418b00 */

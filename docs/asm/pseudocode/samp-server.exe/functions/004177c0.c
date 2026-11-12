/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004177c0
 * Name: FUN_004177c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004177c0(char *param_1,undefined1 param_2)

{
  int iVar1;
  int *in_EAX;
  undefined1 *unaff_ESI;
  
  iVar1 = *in_EAX;
  if ((*(char *)(iVar1 + 0x1e) == '\0') && (*param_1 == 'b')) {
    *unaff_ESI = param_2;
    FUN_004158d0(iVar1,*(int *)(unaff_ESI + 0xc));
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
  }
  return;
}


/* END FUNCTION 0x004177c0 */

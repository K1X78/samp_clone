/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482590
 * Name: FUN_00482590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00482590(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}


/* END FUNCTION 0x00482590 */

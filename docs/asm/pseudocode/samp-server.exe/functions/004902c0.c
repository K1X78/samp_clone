/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004902c0
 * Name: FUN_004902c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004902c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}


/* END FUNCTION 0x004902c0 */

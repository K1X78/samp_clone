/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417940
 * Name: FUN_00417940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00417940(undefined *param_1)

{
  int iVar1;
  int *in_EAX;
  
  if (in_EAX != (int *)0x0) {
    iVar1 = *in_EAX;
    while (-1 < iVar1) {
      FUN_00417910();
      iVar1 = *in_EAX;
    }
    (*(code *)param_1)();
  }
  return;
}


/* END FUNCTION 0x00417940 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e3a0
 * Name: FUN_0040e3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040e3a0(int *param_1,int *param_2)

{
  int *extraout_ECX;
  int *extraout_EDX;
  int iVar1;
  
  if ((param_2 != (int *)0x0) && (iVar1 = 0, 0 < *param_2)) {
    do {
      FUN_0040e390(param_1);
      iVar1 = iVar1 + 1;
      param_1 = extraout_ECX;
    } while (iVar1 < *extraout_EDX);
  }
  return;
}


/* END FUNCTION 0x0040e3a0 */

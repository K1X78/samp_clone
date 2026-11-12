/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423080
 * Name: FUN_00423080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00423080(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    pcVar1 = FUN_00411540();
    return pcVar1;
  }
  iVar2 = FUN_00418b70();
  if (iVar2 != 0) {
    FUN_00407e50(*(int *)(param_1 + 0x44));
    if ((*(char *)(param_1 + 0x1e) != '\0') ||
       (pcVar1 = (char *)FUN_0041ffb0(), pcVar1 == (char *)0x0)) {
      pcVar1 = FUN_00411540();
    }
    FUN_00407e90(*(int *)(param_1 + 0x44));
    return pcVar1;
  }
  FUN_0041d7c0();
  pcVar1 = FUN_00411540();
  return pcVar1;
}


/* END FUNCTION 0x00423080 */

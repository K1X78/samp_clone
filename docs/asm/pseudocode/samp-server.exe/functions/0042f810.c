/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f810
 * Name: FUN_0042f810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


wchar_t * __cdecl FUN_0042f810(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return L"out of memory";
  }
  iVar1 = FUN_00418b70();
  if (iVar1 == 0) {
    return L"library routine called out of sequence";
  }
  FUN_00407e50(*(int *)(param_1 + 0x44));
  if (*(char *)(param_1 + 0x1e) != '\0') {
    FUN_00407e90(*(int *)(param_1 + 0x44));
    return L"out of memory";
  }
  pwVar2 = (wchar_t *)FUN_0041ffc0();
  if (pwVar2 == (wchar_t *)0x0) {
    pcVar3 = FUN_00411540();
    FUN_0042e5e0((void *)0xffffffff,*(int *)(param_1 + 0xd0),pcVar3);
    pwVar2 = (wchar_t *)FUN_0041ffc0();
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return pwVar2;
}


/* END FUNCTION 0x0042f810 */

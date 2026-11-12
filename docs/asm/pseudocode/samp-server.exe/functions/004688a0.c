/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004688a0
 * Name: FUN_004688a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004688a0(SOCKET *param_1)

{
  FUN_00468360(param_1);
  if (*(void **)((int)param_1 + 0x7213) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x7213));
  }
  if (*(void **)((int)param_1 + 0x7217) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x7217));
  }
  WSACleanup();
  return;
}


/* END FUNCTION 0x004688a0 */

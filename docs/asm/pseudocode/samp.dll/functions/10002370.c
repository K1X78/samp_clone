/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002370
 * Name: FUN_10002370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002370(int param_1)

{
  if (*(void **)(param_1 + 0xe) != (void *)0x0) {
    _free(*(void **)(param_1 + 0xe));
  }
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    _free(*(void **)(param_1 + 10));
  }
  if (*(void **)(param_1 + 0x16) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x16));
  }
  if ((*(int *)(param_1 + 6) == 2) && (*(void **)(param_1 + 0x12) != (void *)0x0)) {
    _free(*(void **)(param_1 + 0x12));
  }
  if (*(void **)(param_1 + 0x1a) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x1a));
  }
  if (*(void **)(param_1 + 0x1e) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x1e));
  }
  WSACleanup();
  return;
}


/* END FUNCTION 0x10002370 */

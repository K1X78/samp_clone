/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100421c0
 * Name: FUN_100421c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100421c0(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 5) = 1;
  cVar1 = *(char *)(param_1 + 4);
  while (cVar1 == '\0') {
    FUN_10040f10();
    if (-1 < *(int *)(param_1 + 0xc06)) {
      FUN_10043560(*(int *)(param_1 + 0xc06));
    }
    cVar1 = *(char *)(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return 0;
}


/* END FUNCTION 0x100421c0 */

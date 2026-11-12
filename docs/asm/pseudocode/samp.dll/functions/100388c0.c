/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100388c0
 * Name: FUN_100388c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100388c0(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xc19) != '\0') {
    cVar1 = FUN_100331a0(param_1 + 0xc12);
    if (((cVar1 != '\0') && (*(char *)(param_1 + 0xc18) == '\0')) ||
       ((cVar1 = FUN_100331d0(param_1 + 0xc12), cVar1 != '\0' &&
        (*(char *)(param_1 + 0xc18) == '\x01')))) {
      FUN_1001fb50(param_2 + 1,param_3 + -1);
      *(undefined1 *)(param_1 + 0xc19) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100388c0 */

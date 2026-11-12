/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060520
 * Name: FUN_10060520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10060520(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(void **)(param_1 + 0xb) != (void *)0x0) {
      _free(*(void **)(param_1 + 0xb));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 5) != 0) {
      do {
        if (*(int *)((int)*(void **)(param_1 + 0xf) + uVar1 * 4) != 0) {
          _free(*(void **)(param_1 + 0xf));
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 5));
    }
    if (*(void **)(param_1 + 0xf) != (void *)0x0) {
      _free(*(void **)(param_1 + 0xf));
    }
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x10060520 */

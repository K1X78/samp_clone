/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060690
 * Name: FUN_10060690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10060690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1011b79c;
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_10060520();
    return;
  }
  return;
}


/* END FUNCTION 0x10060690 */

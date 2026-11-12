/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060780
 * Name: FUN_10060780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10060780(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1011b79c;
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_10060520();
  }
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x10060780 */

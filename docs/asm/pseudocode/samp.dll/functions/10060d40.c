/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060d40
 * Name: FUN_10060d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10060d40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x63da) = 1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 2;
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}


/* END FUNCTION 0x10060d40 */

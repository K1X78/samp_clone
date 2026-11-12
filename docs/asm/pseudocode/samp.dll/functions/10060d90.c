/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060d90
 * Name: FUN_10060d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060d90(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_00c97c18;
  iVar1 = _DAT_00c97c48 + _DAT_00c97c18 * 0x14;
  *(uint *)(iVar1 + 0x10) = (uint)(*(int *)(iVar1 + 0x10) == 0);
  _DAT_00c97c18 = 0xffffffff;
  (*(code *)0x745c70)(iVar2);
  _DAT_00c97c18 = iVar2;
  return;
}


/* END FUNCTION 0x10060d90 */

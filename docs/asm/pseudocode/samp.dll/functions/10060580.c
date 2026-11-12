/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060580
 * Name: FUN_10060580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10060580(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 5) != 0) {
    iVar2 = 0;
    do {
      iVar1 = __stricmp((char *)(*(int *)(param_1 + 0xb) + 8 + iVar2),param_2);
      if (iVar1 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x26;
    } while (uVar3 < *(uint *)(param_1 + 5));
  }
  return 0xffffffff;
}


/* END FUNCTION 0x10060580 */

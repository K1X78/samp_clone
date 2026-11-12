/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10107f8f
 * Name: ___iswctype_mt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint ___iswctype_mt(int param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  uint local_8;
  
  if (param_2 != 0xffff) {
    if (param_2 < 0x100) {
      local_8 = (uint)*(ushort *)(PTR_DAT_10155f04 + (uint)param_2 * 2);
      goto LAB_10107fdb;
    }
    iVar1 = ___crtGetStringTypeW
                      (1,&param_2,1,&local_8,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0x14));
    if (iVar1 != 0) goto LAB_10107fdb;
  }
  local_8 = 0;
LAB_10107fdb:
  return local_8 & 0xffff & (uint)param_3;
}


/* END FUNCTION 0x10107f8f */

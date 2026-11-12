/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bb99
 * Name: _CountryEnumProc_4
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint _CountryEnumProc_4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  uVar1 = _LcidFromHexString();
  iVar2 = (*DAT_102ad250)(uVar1,(-(uint)(DAT_102ad240 != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_102ad230 = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __stricmp(DAT_102ad244,local_80);
    if (iVar2 == 0) {
      iVar2 = _TestDefaultCountry(uVar1);
      if (iVar2 != 0) {
        DAT_102ad230 = DAT_102ad230 | 4;
        DAT_102ad234 = uVar1;
        DAT_102ad238 = uVar1;
      }
    }
    uVar3 = ~(DAT_102ad230 >> 2) & 1;
  }
  return uVar3;
}


/* END FUNCTION 0x1010bb99 */

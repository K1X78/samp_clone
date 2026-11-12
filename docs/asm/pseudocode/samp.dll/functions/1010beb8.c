/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010beb8
 * Name: _LanguageEnumProc_4
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint _LanguageEnumProc_4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  uVar1 = _LcidFromHexString();
  iVar2 = (*DAT_102ad250)(uVar1,(-(uint)(DAT_102ad23c != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_102ad230 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_102ad24c,local_80);
  if (iVar2 == 0) {
    if (DAT_102ad23c == 0) {
      uVar3 = 1;
      goto LAB_1010bf4a;
    }
  }
  else {
    if (((DAT_102ad23c != 0) || (DAT_102ad248 == 0)) ||
       (iVar2 = __strnicmp(DAT_102ad24c,local_80,DAT_102ad248), iVar2 != 0)) goto LAB_1010bf69;
    uVar3 = 0;
LAB_1010bf4a:
    iVar2 = _TestDefaultLanguage(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_1010bf69;
  }
  DAT_102ad230 = DAT_102ad230 | 4;
  DAT_102ad234 = uVar1;
  DAT_102ad238 = uVar1;
LAB_1010bf69:
  return ~(DAT_102ad230 >> 2) & 1;
}


/* END FUNCTION 0x1010beb8 */

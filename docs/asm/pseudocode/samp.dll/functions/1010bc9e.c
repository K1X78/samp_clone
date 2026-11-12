/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bc9e
 * Name: _LangCountryEnumProc_4
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint _LangCountryEnumProc_4(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  iVar1 = _LcidFromHexString();
  iVar2 = (*DAT_102ad250)(iVar1,(-(uint)(DAT_102ad240 != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_102ad230 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_102ad244,local_80);
  if (iVar2 == 0) {
    iVar2 = (*DAT_102ad250)(iVar1,(-(uint)(DAT_102ad23c != 0) & 0xfffff002) + 0x1001,local_80,0x78);
    if (iVar2 == 0) {
      DAT_102ad230 = 0;
      return 1;
    }
    iVar2 = __stricmp(DAT_102ad24c,local_80);
    if (iVar2 == 0) {
      DAT_102ad230 = DAT_102ad230 | 0x304;
      DAT_102ad234 = iVar1;
      DAT_102ad238 = iVar1;
    }
    else if ((DAT_102ad230 & 2) == 0) {
      if ((DAT_102ad248 == 0) ||
         (iVar2 = __strnicmp(DAT_102ad24c,local_80,DAT_102ad248), iVar2 != 0)) {
        if (((DAT_102ad230 & 1) == 0) && (iVar2 = _TestDefaultCountry(iVar1), iVar2 != 0)) {
          DAT_102ad230 = DAT_102ad230 | 1;
          DAT_102ad238 = iVar1;
        }
      }
      else {
        DAT_102ad230 = DAT_102ad230 | 2;
        DAT_102ad238 = iVar1;
        sVar3 = _strlen(DAT_102ad24c);
        if (sVar3 == DAT_102ad248) {
          DAT_102ad234 = iVar1;
        }
      }
    }
  }
  if ((DAT_102ad230 & 0x300) == 0x300) goto LAB_1010be9c;
  iVar2 = (*DAT_102ad250)(iVar1,(-(uint)(DAT_102ad23c != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_102ad230 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_102ad24c,local_80);
  if (iVar2 == 0) {
    DAT_102ad230 = DAT_102ad230 | 0x200;
    if (((DAT_102ad23c == 0) && (DAT_102ad248 != 0)) &&
       (sVar3 = _strlen(DAT_102ad24c), sVar3 == DAT_102ad248)) {
      uVar4 = 1;
      goto LAB_1010be7b;
    }
  }
  else {
    if (((DAT_102ad23c != 0) || (DAT_102ad248 == 0)) ||
       (iVar2 = __strnicmp(DAT_102ad24c,local_80,DAT_102ad248), iVar2 != 0)) goto LAB_1010be9c;
    uVar4 = 0;
LAB_1010be7b:
    iVar2 = _TestDefaultLanguage(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_1010be9c;
  }
  DAT_102ad230 = DAT_102ad230 | 0x100;
  if (DAT_102ad234 == 0) {
    DAT_102ad234 = iVar1;
  }
LAB_1010be9c:
  return ~(DAT_102ad230 >> 2) & 1;
}


/* END FUNCTION 0x1010bc9e */

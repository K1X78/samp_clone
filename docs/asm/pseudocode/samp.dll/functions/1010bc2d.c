/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bc2d
 * Name: _TestDefaultLanguage
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 _TestDefaultLanguage(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined1 local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  iVar1 = (*DAT_102ad250)(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (iVar1 == 0) {
LAB_1010bc8d:
    uVar5 = 0;
  }
  else {
    uVar2 = _LcidFromHexString();
    if ((param_1 != uVar2) && (param_2 != 0)) {
      sVar3 = _strlen(DAT_102ad24c);
      sVar4 = _GetPrimaryLen();
      if (sVar4 == sVar3) goto LAB_1010bc8d;
    }
    uVar5 = 1;
  }
  return uVar5;
}


/* END FUNCTION 0x1010bc2d */

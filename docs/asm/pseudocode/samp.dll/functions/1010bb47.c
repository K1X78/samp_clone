/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bb47
 * Name: _LcidFromHexString
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  while (cVar2 = *param_2, cVar2 != '\0') {
    param_2 = param_2 + 1;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
  }
  return iVar1;
}


/* END FUNCTION 0x1010bb47 */

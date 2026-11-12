/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085760
 * Name: FUN_10085760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085760(void)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  WCHAR local_c;
  wint_t local_a;
  
  _DAT_10180600 = GetKeyboardLayout(0);
  if (DAT_10181a88 == _DAT_10180600) {
    return;
  }
  uVar3 = (uint)_DAT_10180600 & 0x3ff;
  DAT_10181a88 = _DAT_10180600;
  if (uVar3 == 4) {
    uVar3 = ((uint)_DAT_10180600 & 0xffff) >> 10;
    DAT_1017f6b1 = '\x01';
    if (uVar3 == 1) {
      PTR_DAT_10140c9c = &DAT_10140c88;
      return;
    }
    if (uVar3 == 2) {
      PTR_DAT_10140c9c = &DAT_10140c82;
      iVar2 = FUN_10085500(0);
      DAT_1017f6b1 = '\x01' - (iVar2 != 0);
      if ((undefined2 *)PTR_DAT_10140c9c != &DAT_10140c7c) {
        return;
      }
      goto LAB_1008580f;
    }
  }
  else {
    if (uVar3 == 0x11) {
      PTR_DAT_10140c9c = &DAT_10140c94;
      DAT_1017f6b1 = 1;
      return;
    }
    if (uVar3 == 0x12) {
      PTR_DAT_10140c9c = &DAT_10140c8e;
      DAT_1017f6b1 = 0;
      return;
    }
  }
  PTR_DAT_10140c9c = (undefined *)&DAT_10140c7c;
LAB_1008580f:
  GetLocaleInfoW((uint)_DAT_10180600 & 0xffff,3,&local_c,5);
  *(WCHAR *)PTR_DAT_10140c9c = local_c;
  wVar1 = _towlower(local_a);
  *(wint_t *)(PTR_DAT_10140c9c + 2) = wVar1;
  return;
}


/* END FUNCTION 0x10085760 */

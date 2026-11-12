/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101de0
 * Name: FUN_10101de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * FUN_10101de0(void)

{
  undefined1 *in_EAX;
  int iVar1;
  int unaff_EBP;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  *in_EAX = 0;
  __strcats(DAT_10155eb4,3,PTR_s_LC_COLLATE_10155ebc,&DAT_10117f7c,PTR_DAT_10155ec0);
  ppuVar2 = &PTR_DAT_10155ec0;
  do {
    FUN_10103ca0(DAT_10155eb4,&DAT_10117f80);
    ppuVar3 = ppuVar2 + 3;
    iVar1 = _strcmp(*ppuVar2,*ppuVar3);
    if (iVar1 != 0) {
      unaff_EBP = 0;
    }
    __strcats(DAT_10155eb4,3,ppuVar2[2],&DAT_10117f7c,*ppuVar3);
    ppuVar2 = ppuVar3;
  } while ((int)ppuVar3 < 0x10155ef0);
  if (unaff_EBP == 0) {
    return DAT_10155eb4;
  }
  _free(DAT_10155eb4);
  DAT_10155eb4 = (undefined *)0x0;
  return PTR_DAT_10155ecc;
}


/* END FUNCTION 0x10101de0 */

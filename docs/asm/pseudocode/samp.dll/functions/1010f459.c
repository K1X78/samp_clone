/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010f459
 * Name: siglookup
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall siglookup(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + DAT_10155f8c * 0xc);
  if ((param_2 + DAT_10155f8c * 0xc <= uVar1) || (*(int *)(uVar1 + 4) != unaff_ESI)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* END FUNCTION 0x1010f459 */

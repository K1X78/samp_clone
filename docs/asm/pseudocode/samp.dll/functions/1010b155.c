/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010b155
 * Name: ___free_lconv_num
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void ___free_lconv_num(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_10156494) && (puVar1 != PTR_DAT_10156464)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 4)) && (puVar1 != PTR_DAT_10156468)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 8)) && (puVar1 != PTR_DAT_1015646c)) {
      _free(puVar1);
    }
  }
  return;
}


/* END FUNCTION 0x1010b155 */

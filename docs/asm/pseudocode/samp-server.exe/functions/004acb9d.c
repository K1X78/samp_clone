/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004acb9d
 * Name: ___free_lconv_num
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_004eca54) && (puVar1 != PTR_DAT_004eca24)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 4)) && (puVar1 != PTR_DAT_004eca28)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 8)) && (puVar1 != PTR_DAT_004eca2c)) {
      _free(puVar1);
    }
  }
  return;
}


/* END FUNCTION 0x004acb9d */

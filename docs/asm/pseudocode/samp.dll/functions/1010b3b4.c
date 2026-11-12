/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010b3b4
 * Name: ___free_lconv_mon
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void ___free_lconv_mon(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0xc)) && (puVar1 != PTR_DAT_10156470)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x10)) && (puVar1 != PTR_DAT_10156474)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x14)) && (puVar1 != PTR_DAT_10156478)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x18)) && (puVar1 != PTR_DAT_1015647c)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x1c)) && (puVar1 != PTR_DAT_10156480)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x20)) && (puVar1 != PTR_DAT_10156484)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_10156494 + 0x24)) && (puVar1 != PTR_DAT_10156488)) {
      _free(puVar1);
    }
  }
  return;
}


/* END FUNCTION 0x1010b3b4 */

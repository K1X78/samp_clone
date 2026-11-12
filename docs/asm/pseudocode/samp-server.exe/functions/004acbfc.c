/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004acbfc
 * Name: ___free_lconv_mon
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl ___free_lconv_mon(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0xc)) && (puVar1 != PTR_DAT_004eca30)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x10)) && (puVar1 != PTR_DAT_004eca34)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x14)) && (puVar1 != PTR_DAT_004eca38)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x18)) && (puVar1 != PTR_DAT_004eca3c)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x1c)) && (puVar1 != PTR_DAT_004eca40)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x20)) && (puVar1 != PTR_DAT_004eca44)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_004eca54 + 0x24)) && (puVar1 != PTR_DAT_004eca48)) {
      _free(puVar1);
    }
  }
  return;
}


/* END FUNCTION 0x004acbfc */

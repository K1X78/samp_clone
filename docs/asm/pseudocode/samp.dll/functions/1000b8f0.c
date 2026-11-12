/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b8f0
 * Name: FUN_1000b8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000b8f0(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x23);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x1f);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') && (*(void **)(param_1 + 4) != (void *)0x0)) {
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x1000b8f0 */

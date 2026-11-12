/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484b00
 * Name: FUN_00484b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484b00(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x2d4b);
  if (pvVar1 != (void *)0x0) {
    FUN_00488710((int)pvVar1);
    _free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x2d4f);
  if (pvVar1 != (void *)0x0) {
    FUN_00488070(pvVar1);
    _free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30cb);
  if (pvVar1 != (void *)0x0) {
    FUN_00488de0((int)pvVar1);
    _free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30cf);
  if (pvVar1 != (void *)0x0) {
    FUN_004880d0((int)pvVar1);
    _free(pvVar1);
  }
  return;
}


/* END FUNCTION 0x00484b00 */

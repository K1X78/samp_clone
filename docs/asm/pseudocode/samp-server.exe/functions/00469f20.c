/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469f20
 * Name: FUN_00469f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00469f20(int param_1)

{
  undefined4 *_Memory;
  void **ppvVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b157e;
  pvStack_c = ExceptionList;
  puVar2 = *(undefined4 **)(param_1 + 0x4b4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (puVar2 != *(undefined4 **)(param_1 + 0x4b8)) {
    do {
      _Memory = (undefined4 *)*puVar2;
      if ((code *)_Memory[3] != (code *)0x0) {
        (*(code *)_Memory[3])();
      }
      FreeLibrary((HMODULE)*_Memory);
      _free(_Memory);
      puVar2 = puVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (puVar2 != *(undefined4 **)(param_1 + 0x4b8));
  }
  ExceptionList = ppvVar1;
  if (*(void **)(param_1 + 0x4b4) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x00469f20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e390
 * Name: FUN_1001e390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e390(int param_1)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x2400);
  iVar1 = 0x900;
  do {
    _Memory = (void *)*puVar2;
    if (_Memory != (void *)0x0) {
      FUN_100b2b50();
      _free(_Memory);
      *puVar2 = 0;
      puVar2[-0x900] = 0;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x1001e390 */

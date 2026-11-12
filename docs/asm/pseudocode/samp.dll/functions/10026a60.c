/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026a60
 * Name: FUN_10026a60
 * Status: ok
 * Single JMP forwarder to 0x10026780; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10026a60(int *param_1)

{
  int *piVar1;
  void *_Memory;
  int iVar2;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101143d8;
  pvStack_c = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_10026360();
    uStack_4 = 0;
    FUN_100263b0(param_1);
    while( true ) {
      if (uStack_14 < uStack_18) {
        iVar2 = uStack_10 - uStack_18;
      }
      else {
        iVar2 = -uStack_18;
      }
      if (uStack_14 + iVar2 == 0) break;
      uStack_18 = uStack_18 + 1;
      if (uStack_18 == uStack_10) {
        _Memory = *(void **)(iStack_1c + -4 + uStack_10 * 4);
        uStack_18 = 0;
      }
      else if (uStack_18 == 0) {
        _Memory = *(void **)(iStack_1c + -4 + uStack_10 * 4);
      }
      else {
        _Memory = *(void **)(iStack_1c + -4 + uStack_18 * 4);
      }
      if (*(int *)((int)_Memory + 5) != 0) {
        FUN_100263b0((int)_Memory + 5);
      }
      if (*(int *)((int)_Memory + 9) != 0) {
        FUN_100263b0((int)_Memory + 9);
      }
      _free(_Memory);
    }
    piVar1 = param_1 + 1;
    iVar2 = 0x100;
    do {
      _free((void *)*piVar1);
      piVar1 = (int *)((int)piVar1 + 6);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_1 = 0;
    uStack_4 = 0xffffffff;
    FUN_10026390();
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10026a60 */

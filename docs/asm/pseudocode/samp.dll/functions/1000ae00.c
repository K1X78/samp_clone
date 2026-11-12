/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ae00
 * Name: FUN_1000ae00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000ae00(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10112c50;
  pvStack_10 = ExceptionList;
  uVar3 = param_2 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar1 >> 1;
    param_2 = uVar3;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= -uVar2 - 2)) {
      param_2 = uVar2 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  operator_new(param_2 + 1);
  FUN_1000ae9c();
  return;
}


/* END FUNCTION 0x1000ae00 */

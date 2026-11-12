/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013f40
 * Name: FUN_10013f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10013f40(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  uint uVar3;
  
  if (param_2 < 0x3ec) {
    uVar3 = (uint)param_2;
    if ((*(int *)(param_1 + 0xfd6 + uVar3 * 4) != 0) &&
       (puVar1 = (undefined4 *)(param_1 + 0x26 + uVar3 * 4),
       *(int *)(param_1 + 0x26 + uVar3 * 4) != 0)) {
      iVar2 = *(int *)(param_1 + 0x1e);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 300) != 0)) && (*(uint *)(iVar2 + 0x314) == uVar3)) {
        FUN_10004080(0);
      }
      *(undefined4 *)(param_1 + 0xfd6 + uVar3 * 4) = 0;
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_10013e10();
        _free(_Memory);
      }
      *puVar1 = 0;
      FUN_10013650();
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10013f40 */

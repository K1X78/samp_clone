/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100021b0
 * Name: FUN_100021b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100021b0(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  _Memory = *(void **)(param_1 + uVar2 * 4);
  if (_Memory != (void *)0x0) {
    _free(_Memory);
    *(undefined4 *)(param_1 + uVar2 * 4) = 0;
    *(undefined4 *)(param_1 + 0x1000 + uVar2 * 4) = 0;
  }
  puVar1 = _malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
    puVar1[1] = param_6;
    puVar1[2] = param_5;
    puVar1[3] = param_4;
    puVar1[4] = param_7;
    puVar1[5] = param_7;
    *(undefined4 **)(param_1 + uVar2 * 4) = puVar1;
    *(undefined4 *)(param_1 + 0x1000 + uVar2 * 4) = 1;
  }
  return;
}


/* END FUNCTION 0x100021b0 */

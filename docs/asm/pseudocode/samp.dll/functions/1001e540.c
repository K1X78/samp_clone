/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e540
 * Name: FUN_1001e540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001e540(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (((param_2 < 2000) && (uVar2 = (uint)param_2, *(int *)(param_1 + 0x3074 + uVar2 * 4) != 0)) &&
     (*(int *)(param_1 + 0x1134 + uVar2 * 4) != 0)) {
    FUN_100b7d20();
    puVar1 = *(undefined4 **)(param_1 + 0x1134 + uVar2 * 4);
    *(undefined4 *)(param_1 + 0x3074 + uVar2 * 4) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 0x1134 + uVar2 * 4) = 0;
    *(undefined4 *)(param_1 + 0x4fb4 + uVar2 * 4) = 0;
    FUN_1001e470();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1001e540 */

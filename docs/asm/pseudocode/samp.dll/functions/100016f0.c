/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100016f0
 * Name: FUN_100016f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100016f0(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (((param_2 < 1000) && (uVar2 = (uint)param_2, *(int *)(param_1 + 0xfa4 + uVar2 * 4) != 0)) &&
     (puVar1 = *(undefined4 **)(param_1 + 4 + uVar2 * 4), puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0xfa4 + uVar2 * 4) = 0;
    (**(code **)*puVar1)(1);
    *(undefined4 *)(param_1 + 4 + uVar2 * 4) = 0;
    *(undefined4 *)(param_1 + 0x1f44 + uVar2 * 4) = 0;
    FUN_10001660();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100016f0 */

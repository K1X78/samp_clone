/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012750
 * Name: FUN_10012750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10012750(int param_1,ushort param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (((param_2 < 0x835) && (uVar3 = (uint)param_2, *(int *)(param_1 + 4 + uVar3 * 4) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x20d4 + uVar3 * 4), iVar1 != 0)) {
    if (**(int **)(DAT_102aca3c + 4) == iVar1) {
      FUN_1009d4a0(0);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x20d4 + uVar3 * 4);
    *(undefined4 *)(param_1 + 4 + uVar3 * 4) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x20d4 + uVar3 * 4) = 0;
    FUN_100126a0();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10012750 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aea50
 * Name: FUN_100aea50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aea50(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((-1 < param_2) && (param_2 < 10)) && (*(int *)(param_1 + 0x4c + param_2 * 4) == 1)) {
    puVar2 = *(undefined4 **)(param_1 + 0x27c + param_2 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
      *(undefined4 *)(param_1 + 0x27c + param_2 * 4) = 0;
    }
    puVar2 = (undefined4 *)(param_2 * 0x34 + 0x74 + param_1);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x4c + param_2 * 4) = 0;
  }
  return;
}


/* END FUNCTION 0x100aea50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7010
 * Name: FUN_100b7010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7010(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44)), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x4c) != 0) &&
       (iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c)), iVar1 == 4)) {
      return;
    }
    if ((*(int *)(param_1 + 0x4c) != 0) &&
       (iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c)), iVar1 == 5)) {
      return;
    }
    if ((*(int *)(param_1 + 0x4c) != 0) &&
       (iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c)), iVar1 == 3)) {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1f6) = param_2;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x514) = param_2;
  }
  return;
}


/* END FUNCTION 0x100b7010 */

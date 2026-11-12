/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e950
 * Name: FUN_1009e950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009e950(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    *param_2 = **(undefined4 **)(iVar1 + 0x14);
    param_2[1] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 4);
    param_2[2] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 8);
    param_2[4] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x10);
    param_2[5] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x14);
    param_2[6] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x18);
    param_2[8] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x20);
    param_2[9] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x24);
    param_2[10] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x28);
    param_2[0xc] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x30);
    param_2[0xd] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x34);
    param_2[0xe] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x38);
  }
  return;
}


/* END FUNCTION 0x1009e950 */

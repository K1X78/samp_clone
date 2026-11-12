/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ea00
 * Name: FUN_1009ea00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1009ea00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    **(undefined4 **)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 4) = param_3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 8) = param_4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x14) = param_7;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x18) = param_8;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x20) = param_10;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x24) = param_11;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x28) = param_12;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x30) = param_14;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x34) = param_15;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x38) = param_16;
  }
  return;
}


/* END FUNCTION 0x1009ea00 */

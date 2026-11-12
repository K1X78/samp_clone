/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dded0
 * Name: FUN_100dded0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100dded0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x20) = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_4 != 0) {
    *(int *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  return 0;
}


/* END FUNCTION 0x100dded0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7d90
 * Name: FUN_100a7d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a7d90(int param_1,short param_2,undefined4 *param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    *(undefined2 *)(param_1 + 0xc0) = 0xffff;
    *(undefined4 *)(param_1 + 0xc2) = 0;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    *(undefined4 *)(param_1 + 0xca) = 0;
    *(undefined4 *)(param_1 + 0xce) = 0;
    *(undefined4 *)(param_1 + 0xd2) = 0;
    *(undefined1 *)(param_1 + 0xda) = 1;
    *(undefined4 *)(param_1 + 0xd6) = 0;
    return;
  }
  *(short *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc2) = *param_3;
  *(undefined4 *)(param_1 + 0xc6) = param_3[1];
  *(undefined4 *)(param_1 + 0xca) = param_3[2];
  *(undefined4 *)(param_1 + 0xce) = *param_4;
  *(undefined4 *)(param_1 + 0xd2) = param_4[1];
  uVar1 = param_4[2];
  *(undefined1 *)(param_1 + 0xda) = param_5;
  *(undefined4 *)(param_1 + 0xd6) = uVar1;
  return;
}


/* END FUNCTION 0x100a7d90 */

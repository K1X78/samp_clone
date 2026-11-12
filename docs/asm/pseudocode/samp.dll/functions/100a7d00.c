/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7d00
 * Name: FUN_100a7d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7d00(int param_1,short param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == -1) {
    *(undefined2 *)(param_1 + 0xbe) = 0xffff;
    *(undefined4 *)(param_1 + 0xc2) = 0;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    *(undefined4 *)(param_1 + 0xca) = 0;
    *(undefined4 *)(param_1 + 0xce) = 0;
    *(undefined4 *)(param_1 + 0xd2) = 0;
    *(undefined4 *)(param_1 + 0xd6) = 0;
    return;
  }
  *(short *)(param_1 + 0xbe) = param_2;
  *(undefined4 *)(param_1 + 0xc2) = *param_3;
  *(undefined4 *)(param_1 + 0xc6) = param_3[1];
  *(undefined4 *)(param_1 + 0xca) = param_3[2];
  *(undefined4 *)(param_1 + 0xce) = *param_4;
  *(undefined4 *)(param_1 + 0xd2) = param_4[1];
  *(undefined4 *)(param_1 + 0xd6) = param_4[2];
  return;
}


/* END FUNCTION 0x100a7d00 */

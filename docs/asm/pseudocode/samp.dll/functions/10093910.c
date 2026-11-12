/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093910
 * Name: FUN_10093910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10093910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  *(undefined4 *)(param_1 + 0x124) = param_4;
  *(undefined4 *)(param_1 + 0x128) = param_5;
  D3DXMatrixPerspectiveFovLH(param_1 + 0x44,param_2,param_3,param_4,param_5);
  return;
}


/* END FUNCTION 0x10093910 */

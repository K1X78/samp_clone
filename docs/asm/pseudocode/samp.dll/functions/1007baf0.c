/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007baf0
 * Name: FUN_1007baf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1007baf0(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    puVar1 = (undefined4 *)(param_2 * 0x11 + *param_1);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_3 + 4);
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x1007baf0 */

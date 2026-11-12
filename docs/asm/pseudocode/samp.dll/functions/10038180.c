/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038180
 * Name: FUN_10038180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10038180(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((-1 < param_3) && (param_3 < (int)(uint)*(ushort *)(param_1 + 7))) {
    puVar1 = (undefined4 *)(param_3 * 0xc69 + 1 + *(int *)(param_1 + 0x334));
    *param_2 = *puVar1;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar1 + 1);
    return;
  }
  *param_2 = DAT_1013c7cc;
  *(undefined2 *)(param_2 + 1) = DAT_1013c7d0;
  return;
}


/* END FUNCTION 0x10038180 */

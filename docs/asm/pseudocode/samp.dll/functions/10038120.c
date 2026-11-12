/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038120
 * Name: FUN_10038120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10038120(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < param_3) && (param_3 < (int)(uint)*(ushort *)(param_1 + 7))) &&
     (iVar1 = param_3 * 0xc69 + *(int *)(param_1 + 0x334), *(int *)(iVar1 + 0xc62) == 8)) {
    *param_2 = *(undefined4 *)(iVar1 + 1);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar1 + 5);
    return;
  }
  *param_2 = DAT_1013c7cc;
  *(undefined2 *)(param_2 + 1) = DAT_1013c7d0;
  return;
}


/* END FUNCTION 0x10038120 */

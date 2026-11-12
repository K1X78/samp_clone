/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450130
 * Name: FUN_00450130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00450130(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((-1 < param_2) && (param_2 < (int)(uint)*(ushort *)((int)this + 8))) {
    puVar1 = (undefined4 *)(param_2 * 0xcb8 + 1 + *(int *)((int)this + 0x33c));
    *param_1 = *puVar1;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
    return;
  }
  *param_1 = DAT_004cac3c;
  *(undefined2 *)(param_1 + 1) = DAT_004cac40;
  return;
}


/* END FUNCTION 0x00450130 */

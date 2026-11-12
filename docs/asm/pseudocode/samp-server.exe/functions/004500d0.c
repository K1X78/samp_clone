/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004500d0
 * Name: FUN_004500d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004500d0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_2) && (param_2 < (int)(uint)*(ushort *)((int)this + 8))) &&
     (iVar1 = param_2 * 0xcb8 + *(int *)((int)this + 0x33c), *(int *)(iVar1 + 0xcb0) == 8)) {
    *param_1 = *(undefined4 *)(iVar1 + 1);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(iVar1 + 5);
    return;
  }
  *param_1 = DAT_004cac3c;
  *(undefined2 *)(param_1 + 1) = DAT_004cac40;
  return;
}


/* END FUNCTION 0x004500d0 */

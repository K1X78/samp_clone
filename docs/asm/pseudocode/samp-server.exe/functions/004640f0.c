/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004640f0
 * Name: FUN_004640f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_004640f0(void *this,uint param_1,ushort param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  
  if (((((ushort)param_1 < 0x400) &&
       (uVar1 = param_1 & 0xffff, *(int *)((int)this + uVar1 * 4) != 0)) &&
      (*(int *)(DAT_004fc438 + 8) != 0)) && (param_2 < 1000)) {
    if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)param_2 * 4) != 0) {
      *(ushort *)((uVar1 + 0x7d) * 0x21 + (int)this) = param_2;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x1008) = param_3;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x100c) = param_4;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x1010) = param_5;
      FUN_00463ff0(param_1);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004640f0 */

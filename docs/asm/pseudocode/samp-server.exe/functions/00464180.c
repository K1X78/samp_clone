/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464180
 * Name: FUN_00464180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00464180(void *this,uint param_1,ushort param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  
  if (((((ushort)param_1 < 0x400) &&
       (uVar1 = param_1 & 0xffff, *(int *)((int)this + uVar1 * 4) != 0)) &&
      (*(int *)(DAT_004fc438 + 0xc) != 0)) && (param_2 < 2000)) {
    if (*(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x2014 + (uint)param_2 * 4) != 0) {
      *(ushort *)((int)this + uVar1 * 0x21 + 0x101f) = param_2;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x1008) = param_3;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x100c) = param_4;
      *(undefined4 *)((int)this + uVar1 * 0x21 + 0x1010) = param_5;
      FUN_00463ff0(param_1);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00464180 */

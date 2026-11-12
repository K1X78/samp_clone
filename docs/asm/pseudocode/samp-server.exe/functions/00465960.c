/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465960
 * Name: FUN_00465960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00465960(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  
  if ((param_1 < 0x1000) && (*(int *)((int)this + param_1 * 4 + 0x14000) != 0)) {
    iVar1 = *(int *)(DAT_004fc438 + 8);
    uVar2 = 0;
    if (iVar1 != 0) {
      do {
        if (((((ushort)uVar2 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar2 & 0xffff) * 4) != 0)) &&
            (this_00 = *(void **)(iVar1 + 0x25d84 + (uVar2 & 0xffff) * 4), this_00 != (void *)0x0))
           && (*(char *)((int)this_00 + param_1 + 0x18dd) != '\0')) {
          FUN_00483d60(this_00,param_1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 1000);
      *(undefined4 *)((int)this + param_1 * 4 + 0x14000) = 0;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18000) = 0;
      FUN_00465870((int)this);
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00465960 */

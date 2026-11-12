/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487f60
 * Name: FUN_00487f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00487f60(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (0x3ff < (ushort)param_1) {
    return 0;
  }
  uVar2 = param_1 & 0xffff;
  if (*(int *)((int)this + uVar2 * 4 + 0x8400) == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(uVar2 * 0x21 + (int)this);
  if ((void *)*puVar1 != (void *)0x0) {
    _free((void *)*puVar1);
  }
  FUN_00487c30(this,param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined4 *)((int)this + uVar2 * 4 + 0x8400) = 0;
  return 1;
}


/* END FUNCTION 0x00487f60 */

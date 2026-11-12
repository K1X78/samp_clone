/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100012e0
 * Name: FUN_100012e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100012e0(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (0x7ff < param_2) {
    return 0;
  }
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0xe800 + uVar2 * 4) == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(uVar2 * 0x1d + param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    _free((void *)*puVar1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xe800 + uVar2 * 4) = 0;
  return 1;
}


/* END FUNCTION 0x100012e0 */

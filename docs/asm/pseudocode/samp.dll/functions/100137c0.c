/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100137c0
 * Name: FUN_100137c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __thiscall FUN_100137c0(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (-1 < *(int *)(param_1 + 0x22)) {
    do {
      if ((uVar2 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + (uint)uVar2 * 4) == 1)) {
        iVar1 = *(int *)(param_1 + (uint)uVar2 * 4 + 0x26);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        if (((*(int *)(iVar1 + 4) != 0) &&
            (iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x2a4), iVar1 != 0)) && (param_2 == iVar1)) {
          iVar1 = *(int *)(param_1 + 0x26 + (uint)uVar2 * 4);
          if (iVar1 == 0) {
            return uRam00000000;
          }
          return **(undefined2 **)(iVar1 + 8);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)(uint)uVar2 <= *(int *)(param_1 + 0x22));
  }
  return 0xffff;
}


/* END FUNCTION 0x100137c0 */

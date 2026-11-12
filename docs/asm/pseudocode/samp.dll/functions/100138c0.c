/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100138c0
 * Name: FUN_100138c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100138c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      if (((ushort)uVar2 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + (uVar2 & 0xffff) * 4) == 1)) {
        iVar1 = iVar1 + 1;
      }
      if (((ushort)(uVar2 + 1) < 0x3ec) &&
         (*(int *)(param_1 + 0xfd6 + (uVar2 + 1 & 0xffff) * 4) == 1)) {
        iVar1 = iVar1 + 1;
      }
      if (((ushort)(uVar2 + 2) < 0x3ec) &&
         (*(int *)(param_1 + 0xfd6 + (uVar2 + 2 & 0xffff) * 4) == 1)) {
        iVar1 = iVar1 + 1;
      }
      if (((ushort)(uVar2 + 3) < 0x3ec) &&
         (*(int *)(param_1 + 0xfd6 + (uVar2 + 3 & 0xffff) * 4) == 1)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 4;
    } while ((int)uVar2 < 0x3ec);
    return iVar1;
  }
  uVar2 = 0;
  do {
    if ((((ushort)uVar2 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + (uVar2 & 0xffff) * 4) == 1)) &&
       (*(int *)(*(int *)(param_1 + (uVar2 & 0xffff) * 4 + 0x26) + 4) == 0)) {
      iVar1 = iVar1 + 1;
    }
    if ((((ushort)(uVar2 + 1) < 0x3ec) &&
        (uVar3 = uVar2 + 1 & 0xffff, *(int *)(param_1 + 0xfd6 + uVar3 * 4) == 1)) &&
       (*(int *)(*(int *)(param_1 + uVar3 * 4 + 0x26) + 4) == 0)) {
      iVar1 = iVar1 + 1;
    }
    if ((((ushort)(uVar2 + 2) < 0x3ec) &&
        (uVar3 = uVar2 + 2 & 0xffff, *(int *)(param_1 + 0xfd6 + uVar3 * 4) == 1)) &&
       (*(int *)(*(int *)(param_1 + uVar3 * 4 + 0x26) + 4) == 0)) {
      iVar1 = iVar1 + 1;
    }
    if ((((ushort)(uVar2 + 3) < 0x3ec) &&
        (uVar3 = uVar2 + 3 & 0xffff, *(int *)(param_1 + 0xfd6 + uVar3 * 4) == 1)) &&
       (*(int *)(*(int *)(param_1 + uVar3 * 4 + 0x26) + 4) == 0)) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 4;
  } while ((int)uVar2 < 0x3ec);
  return iVar1;
}


/* END FUNCTION 0x100138c0 */

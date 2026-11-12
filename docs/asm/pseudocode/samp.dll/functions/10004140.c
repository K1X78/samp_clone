/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004140
 * Name: FUN_10004140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10004140(int param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (((iVar1 != 0) && (param_2 < 0x3ec)) &&
     (uVar2 = (uint)param_2, *(int *)(iVar1 + 0xfd6 + uVar2 * 4) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x26 + uVar2 * 4);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    if (*(char *)(iVar3 + 0x1a) != '\0') {
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
      if (*(char *)(iVar1 + 0x1a) != ' ') {
        *(undefined1 *)(param_1 + 0x313) = 1;
        *(uint *)(param_1 + 0x314) = uVar2;
        *(undefined4 *)(param_1 + 0x318) = 0;
      }
    }
  }
  return;
}


/* END FUNCTION 0x10004140 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489660
 * Name: FUN_00489660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00489660(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(DAT_004fc438 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (-1 < *(int *)(iVar1 + 0x30d50)) {
    do {
      if (((((ushort)uVar3 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar3 & 0xffff) * 4) != 0)) &&
          (iVar2 = *(int *)(iVar1 + 0x25d84 + (uVar3 & 0xffff) * 4), iVar2 != 0)) &&
         ((*(short *)(iVar2 + 0x3022) == *(short *)(param_1 + 100) &&
          ((*(char *)(iVar2 + 0x2f95) == '\x02' || (*(char *)(iVar2 + 0x2f95) == '\x03')))))) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 <= *(int *)(iVar1 + 0x30d50));
  }
  return 0;
}


/* END FUNCTION 0x00489660 */

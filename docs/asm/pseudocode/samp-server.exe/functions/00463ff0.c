/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463ff0
 * Name: FUN_00463ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00463ff0(uint param_1)

{
  int iVar1;
  void *this;
  uint uVar2;
  
  iVar1 = *(int *)(DAT_004fc438 + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    do {
      if (((((ushort)uVar2 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar2 & 0xffff) * 4) != 0)) &&
          (this = *(void **)(iVar1 + 0x25d84 + (uVar2 & 0xffff) * 4), this != (void *)0x0)) &&
         (((ushort)param_1 < 0x400 && (*(char *)((param_1 & 0xffff) + 0x14dd + (int)this) != '\0')))
         ) {
        FUN_00483ce0(this,param_1);
        FUN_00483c90(this,param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 1000);
  }
  return;
}


/* END FUNCTION 0x00463ff0 */

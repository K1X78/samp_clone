/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474b40
 * Name: FUN_00474b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_00474b40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  void *this;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(void **)(DAT_004fc438 + 0x14) == (void *)0x0) {
    return 0;
  }
  local_c = *(undefined4 *)(param_2 + 8);
  local_8 = *(undefined4 *)(param_2 + 0xc);
  local_4 = *(undefined4 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x14);
  local_14 = *(undefined4 *)(param_2 + 0x18);
  local_10 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = FUN_00465380(*(void **)(DAT_004fc438 + 0x14),*(undefined4 *)(param_2 + 4),&local_c,
                       &local_18,*(undefined4 *)(param_2 + 0x20));
  if (uVar3 != 0xffff) {
    if (uVar3 < 2000) {
      this = *(void **)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 + (uint)uVar3 * 4);
    }
    else {
      this = (void *)0x0;
    }
    iVar1 = *(int *)(DAT_004fc438 + 8);
    if ((this == (void *)0x0) || (iVar1 == 0)) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x30d50);
    uVar4 = 0;
    if (-1 < iVar2) {
      do {
        if (((ushort)uVar4 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar4 & 0xffff) * 4) != 0)) {
          FUN_0049dfc0(this,(ushort)uVar4);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= iVar2);
    }
  }
  return uVar3;
}


/* END FUNCTION 0x00474b40 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474c20
 * Name: FUN_00474c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00474c20(undefined4 param_1,int param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  local_c = *(undefined4 *)(param_2 + 0xc);
  local_8 = *(undefined4 *)(param_2 + 0x10);
  local_4 = *(undefined4 *)(param_2 + 0x14);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_14 = *(undefined4 *)(param_2 + 0x1c);
  local_10 = *(undefined4 *)(param_2 + 0x20);
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (this = *(void **)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 +
                       (uint)*(ushort *)(param_2 + 4) * 4), this != (void *)0x0)) {
    FUN_0049d9d0(this,*(short *)(param_2 + 8),&local_c,&local_18);
    iVar1 = *(int *)(DAT_004fc438 + 8);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x30d50);
    uVar3 = 0;
    if (-1 < iVar2) {
      do {
        if (((ushort)uVar3 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar3 & 0xffff) * 4) != 0)) {
          FUN_0049dfc0(this,(ushort)uVar3);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 <= iVar2);
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00474c20 */

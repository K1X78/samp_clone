/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471980
 * Name: FUN_00471980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00471980(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *this;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_00;
  ushort uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(DAT_004fc438 + 8);
  if ((*(int *)(DAT_004fc438 + 0xc) == 0) || (iVar1 == 0)) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (this = *(undefined4 **)
              (*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4),
     this != (undefined4 *)0x0)) {
    this[0xf] = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    this[0x10] = uVar2;
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    this[0x11] = uVar3;
    *this = this[0xf];
    this[1] = uVar2;
    this[2] = uVar3;
    iVar4 = *(int *)(iVar1 + 0x30d50);
    uVar6 = 0;
    if (-1 < iVar4) {
      do {
        uVar5 = (ushort)uVar6;
        if ((uVar5 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar6 & 0xffff) * 4) != 0)) {
          this_00 = *(void **)(iVar1 + 0x25d84 + (uVar6 & 0xffff) * 4);
          if ((*(ushort *)(this + 0x19) < 2000) &&
             ((*(char *)(*(ushort *)(this + 0x19) + 0x53d + (int)this_00) != '\0' &&
              (FUN_00489d10(this,uVar5,this[0xf],this[0x10],this[0x11]),
              *(ushort *)((int)this + 0x6a) == uVar5)))) {
            FUN_00483ee0(this_00,this[0xf],this[0x10],this[0x11]);
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 <= iVar4);
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00471980 */

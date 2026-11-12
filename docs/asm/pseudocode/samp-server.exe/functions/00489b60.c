/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489b60
 * Name: FUN_00489b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00489b60(undefined4 *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)param_1 + 0xff));
  if ((*(char *)((int)param_1 + 0xff) == '\0') && (iVar2 = *(int *)((int)param_1 + 0x9e), 0 < iVar2)
     ) {
    iVar1 = _rand();
    iVar2 = iVar1 / 0x14;
    if (iVar1 % 0x14 == 0) {
      iVar2 = FUN_00489b00(param_1);
      return iVar2;
    }
  }
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(param_1 + 0x2d));
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (*(char *)((int)param_1 + 0xff) == '\0') {
      *(undefined1 *)((int)param_1 + 0xff) = 1;
      if ((*DAT_004fc438 != 0) && ((void *)DAT_004fc438[1] != (void *)0x0)) {
        FUN_0046b190((void *)DAT_004fc438[1],(uint)*(ushort *)(param_1 + 0x19),
                     (uint)*(ushort *)((int)param_1 + 0xb5));
        FUN_0046ddf0((void *)*DAT_004fc438,(uint)*(ushort *)(param_1 + 0x19),
                     (uint)*(ushort *)((int)param_1 + 0xb5));
      }
      uVar3 = thunk_FUN_0044e910();
      *(int *)((int)param_1 + 0x101) = (int)uVar3;
    }
    iVar1 = _rand();
    iVar2 = iVar1 / 0x14;
    if (iVar1 % 0x14 == 0) {
      uVar3 = thunk_FUN_0044e910();
      iVar2 = (int)uVar3 - *(int *)((int)param_1 + 0x101);
      if (10000 < iVar2) {
        iVar2 = FUN_00489790(param_1);
      }
    }
  }
  return iVar2;
}


/* END FUNCTION 0x00489b60 */

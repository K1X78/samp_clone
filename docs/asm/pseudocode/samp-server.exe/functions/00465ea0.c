/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465ea0
 * Name: FUN_00465ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465ea0(void *this,uint param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = *(int *)((int)this + 0x30d50);
  uVar3 = 0;
  if (-1 < iVar1) {
    uVar2 = 0;
    do {
      if ((((uVar3 != (ushort)param_1) && (*(int *)((int)this + uVar2 * 4 + 0x24de4) != 0)) &&
          (this_00 = *(void **)((int)this + uVar2 * 4 + 0x25d84), this_00 != (void *)0x0)) &&
         (((ushort)param_1 < 1000 && (*(char *)((param_1 & 0xffff) + 0x155 + (int)this_00) != '\0'))
         )) {
        FUN_00483c10(this_00,param_1);
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while ((int)uVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00465ea0 */

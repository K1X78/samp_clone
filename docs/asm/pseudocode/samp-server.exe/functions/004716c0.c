/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004716c0
 * Name: FUN_004716c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004716c0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = *(void **)(DAT_004fc438 + 8);
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 8);
  if ((((pvVar3 != (void *)0x0) && (*(int *)(DAT_004fc438 + 0xc) != 0)) && (uVar1 < 2000)) &&
     (((*(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x2014 + (uint)uVar1 * 4) != 0 && (uVar2 < 1000)) &&
      (*(int *)((int)pvVar3 + (uint)uVar2 * 4 + 0x24de4) != 0)))) {
    pvVar3 = (void *)FUN_00463d80(pvVar3,uVar2);
    if (pvVar3 != (void *)0x0) {
      uVar4 = FUN_00465b90(pvVar3,uVar1);
      if ((char)uVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x004716c0 */

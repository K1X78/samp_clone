/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476680
 * Name: FUN_00476680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl FUN_00476680(int *param_1,int param_2)

{
  ushort uVar1;
  void *this;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int local_c;
  uint *local_8;
  
  if (((DAT_004fc438 == 0) || (uVar1 = *(ushort *)(param_2 + 4), 999 < uVar1)) ||
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) == 0)) {
    return 0;
  }
  if (uVar1 < 1000) {
    iVar3 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    iVar3 = 0;
  }
  this = *(void **)(iVar3 + 0x2d4b);
  if (this == (void *)0x0) {
    return 0xffff;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar3 = -(local_c + 4U & 0xfffffffc);
    pcVar4 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar3) = local_c + 1;
      *(undefined4 *)(&stack0xffffffe0 + iVar3) = 0;
      *(uint **)(&stack0xffffffdc + iVar3) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar3) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x476726;
      FUN_00403350(*(int *)(&stack0xffffffd8 + iVar3),*(uint **)(&stack0xffffffdc + iVar3),
                   *(int *)(&stack0xffffffe0 + iVar3),*(uint *)(&stack0xffffffe4 + iVar3));
      goto LAB_00476736;
    }
  }
  pcVar4 = &DAT_004fc400;
LAB_00476736:
  uVar2 = FUN_00488760(this,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),pcVar4);
  return uVar2 & 0xffff;
}


/* END FUNCTION 0x00476680 */

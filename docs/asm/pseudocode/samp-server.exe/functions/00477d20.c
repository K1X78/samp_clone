/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477d20
 * Name: FUN_00477d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00477d20(int *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  char *pcVar6;
  uint local_c;
  uint *local_8;
  undefined2 uVar5;
  
  this = *(void **)(DAT_004fc438 + 0x20);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,(int *)&local_c);
  if (0 < (int)local_c) {
    iVar1 = local_c + 1;
    local_c = local_c + 4 & 0xfffffffc;
    iVar3 = -local_c;
    pcVar6 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar3) = iVar1;
      *(undefined4 *)(&stack0xffffffe0 + iVar3) = 0;
      *(uint **)(&stack0xffffffdc + iVar3) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar3) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x477d87;
      uVar4 = FUN_00403350(*(int *)(&stack0xffffffd8 + iVar3),*(uint **)(&stack0xffffffdc + iVar3),
                           *(int *)(&stack0xffffffe0 + iVar3),*(uint *)(&stack0xffffffe4 + iVar3));
      uVar5 = (undefined2)((uint)uVar4 >> 0x10);
      goto LAB_00477d91;
    }
  }
  uVar5 = (undefined2)(local_c >> 0x10);
  pcVar6 = &DAT_004fc400;
LAB_00477d91:
  uVar2 = *(ushort *)(param_2 + 4);
  if ((uVar2 < 0x400) && (*(int *)((int)this + (uint)uVar2 * 4) != 0)) {
    FUN_00464060(this,CONCAT22(uVar5,uVar2),*(undefined4 *)(param_2 + 8),pcVar6);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00477d20 */

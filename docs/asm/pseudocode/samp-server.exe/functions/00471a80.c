/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471a80
 * Name: FUN_00471a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

longlong __cdecl FUN_00471a80(int *param_1,int param_2)

{
  void *this;
  int iVar1;
  uint in_EDX;
  char *pcVar2;
  undefined8 uVar3;
  int local_c;
  uint *local_8;
  
  if (999 < *(ushort *)(param_2 + 4)) {
LAB_00471aad:
    return (ulonglong)in_EDX << 0x20;
  }
  in_EDX = *(uint *)(DAT_004fc438 + 8);
  this = *(void **)(in_EDX + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4);
  if (this == (void *)0x0) goto LAB_00471aad;
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar1 = -(local_c + 4U & 0xfffffffc);
    pcVar2 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar1) = local_c + 1;
      *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0;
      *(uint **)(&stack0xffffffdc + iVar1) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar1) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar1) = 0x471b04;
      FUN_00403350(*(int *)(&stack0xffffffd8 + iVar1),*(uint **)(&stack0xffffffdc + iVar1),
                   *(int *)(&stack0xffffffe0 + iVar1),*(uint *)(&stack0xffffffe4 + iVar1));
      goto LAB_00471b0b;
    }
  }
  pcVar2 = (char *)0x0;
LAB_00471b0b:
  uVar3 = FUN_00483f20(this,*(undefined4 *)(param_2 + 8),pcVar2);
  return CONCAT44((int)((ulonglong)uVar3 >> 0x20),1);
}


/* END FUNCTION 0x00471a80 */

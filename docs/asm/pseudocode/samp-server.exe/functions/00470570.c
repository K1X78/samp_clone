/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470570
 * Name: FUN_00470570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00470570(int *param_1,int param_2)

{
  void *this;
  int iVar1;
  int local_c;
  uint *local_8;
  
  if (*(int *)(DAT_004fc438 + 0xc) != 0) {
    if ((*(ushort *)(param_2 + 4) < 2000) &&
       (*(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x2014 + (uint)*(ushort *)(param_2 + 4) * 4) != 0))
    {
      FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
      FUN_004031d0(local_8,&local_c);
      if (0 < local_c) {
        iVar1 = -(local_c + 4U & 0xfffffffc);
        if (&stack0x00000000 != (undefined1 *)0x18) {
          *(int *)(&stack0xffffffe4 + iVar1) = local_c + 1;
          *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0;
          *(uint **)(&stack0xffffffdc + iVar1) = local_8;
          *(undefined1 **)(&stack0xffffffd8 + iVar1) = &stack0xffffffe8;
          *(undefined4 *)(&stack0xffffffd4 + iVar1) = 0x4705f7;
          FUN_00403350(*(int *)(&stack0xffffffd8 + iVar1),*(uint **)(&stack0xffffffdc + iVar1),
                       *(int *)(&stack0xffffffe0 + iVar1),*(uint *)(&stack0xffffffe4 + iVar1));
          if (1999 < *(ushort *)(param_2 + 4)) {
            *(undefined1 **)(&stack0xffffffe4 + iVar1) = &stack0xffffffe8;
            *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0x47060c;
            FUN_00489910((void *)0x0,*(char **)(&stack0xffffffe4 + iVar1));
            return 1;
          }
          this = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 +
                           (uint)*(ushort *)(param_2 + 4) * 4);
          *(undefined1 **)(&stack0xffffffe4 + iVar1) = &stack0xffffffe8;
          *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0x470634;
          FUN_00489910(this,*(char **)(&stack0xffffffe4 + iVar1));
          return 1;
        }
      }
      if (1999 < *(ushort *)(param_2 + 4)) {
        FUN_00489910((void *)0x0,(char *)0x0);
        return 0;
      }
      FUN_00489910(*(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 +
                             (uint)*(ushort *)(param_2 + 4) * 4),(char *)0x0);
    }
  }
  return 0;
}


/* END FUNCTION 0x00470570 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470b30
 * Name: FUN_00470b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00470b30(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int local_c;
  uint *local_8;
  
  if (DAT_004fc438 != 0) {
    FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_8);
    FUN_004031d0(local_8,&local_c);
    if (0 < local_c) {
      puVar2 = (undefined1 *)(local_c + 4U & 0xfffffffc);
      iVar1 = -(int)puVar2;
      if (&stack0xffffffec != puVar2) {
        *(int *)(&stack0xffffffe8 + iVar1) = local_c + 1;
        *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0;
        *(uint **)(&stack0xffffffe0 + iVar1) = local_8;
        *(undefined1 **)(&stack0xffffffdc + iVar1) = &stack0xffffffec + iVar1;
        *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0x470b8f;
        FUN_00403350(*(int *)(&stack0xffffffdc + iVar1),*(uint **)(&stack0xffffffe0 + iVar1),
                     *(int *)(&stack0xffffffe4 + iVar1),*(uint *)(&stack0xffffffe8 + iVar1));
        *(undefined1 **)(&stack0xffffffe8 + iVar1) = &stack0xffffffec + iVar1;
        *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0x470b9e;
        FUN_004940d0(DAT_004fc438);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00470b30 */

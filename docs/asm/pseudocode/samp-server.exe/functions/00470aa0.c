/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470aa0
 * Name: FUN_00470aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00470aa0(int *param_1,int param_2)

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
      if (&stack0xffffffe8 != puVar2) {
        *(int *)(&stack0xffffffe4 + iVar1) = local_c + 1;
        *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0;
        *(uint **)(&stack0xffffffdc + iVar1) = local_8;
        *(undefined1 **)(&stack0xffffffd8 + iVar1) = &stack0xffffffe8 + iVar1;
        *(undefined4 *)(&stack0xffffffd4 + iVar1) = 0x470b00;
        FUN_00403350(*(int *)(&stack0xffffffd8 + iVar1),*(uint **)(&stack0xffffffdc + iVar1),
                     *(int *)(&stack0xffffffe0 + iVar1),*(uint *)(&stack0xffffffe4 + iVar1));
        *(undefined4 *)(&stack0xffffffe4 + iVar1) = *(undefined4 *)(param_2 + 8);
        *(undefined1 **)(&stack0xffffffe0 + iVar1) = &stack0xffffffe8 + iVar1;
        *(undefined4 *)(&stack0xffffffdc + iVar1) = 0x470b13;
        FUN_004940c0(DAT_004fc438);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00470aa0 */

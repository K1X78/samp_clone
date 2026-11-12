/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004786b0
 * Name: FUN_004786b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_004786b0(int *param_1,int param_2)

{
  ushort uVar1;
  void *this;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int local_c;
  uint *local_8;
  
  iVar5 = *(int *)(DAT_004fc438 + 8);
  if (iVar5 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 1000) && (*(int *)(iVar5 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 1000) {
        iVar5 = *(int *)(iVar5 + 0x25d84 + (uint)uVar1 * 4);
      }
      else {
        iVar5 = 0;
      }
      FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
      FUN_004031d0(local_8,&local_c);
      if (0 < local_c) {
        puVar3 = (undefined1 *)(local_c + 4U & 0xfffffffc);
        iVar2 = -(int)puVar3;
        if (&stack0xffffffe8 != puVar3) {
          *(int *)(&stack0xffffffe4 + iVar2) = local_c + 1;
          *(undefined4 *)(&stack0xffffffe0 + iVar2) = 0;
          *(uint **)(&stack0xffffffdc + iVar2) = local_8;
          *(undefined1 **)(&stack0xffffffd8 + iVar2) = &stack0xffffffe8 + iVar2;
          *(undefined4 *)(&stack0xffffffd4 + iVar2) = 0x478747;
          FUN_00403350(*(int *)(&stack0xffffffd8 + iVar2),*(uint **)(&stack0xffffffdc + iVar2),
                       *(int *)(&stack0xffffffe0 + iVar2),*(uint *)(&stack0xffffffe4 + iVar2));
          this = *(void **)(iVar5 + 0x30cb);
          *(undefined1 **)(&stack0xffffffe4 + iVar2) = &stack0xffffffe8 + iVar2;
          *(undefined4 *)(&stack0xffffffe0 + iVar2) = 0x478756;
          uVar4 = FUN_00489150(this,*(byte **)(&stack0xffffffe4 + iVar2));
          return uVar4;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x004786b0 */

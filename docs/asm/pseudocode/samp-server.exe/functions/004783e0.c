/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004783e0
 * Name: FUN_004783e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_004783e0(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  undefined1 *puVar4;
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
        puVar4 = (undefined1 *)(local_c + 4U & 0xfffffffc);
        iVar3 = -(int)puVar4;
        if (&stack0xffffffe8 != puVar4) {
          *(int *)(&stack0xffffffe4 + iVar3) = local_c + 1;
          *(undefined4 *)(&stack0xffffffe0 + iVar3) = 0;
          *(uint **)(&stack0xffffffdc + iVar3) = local_8;
          *(undefined1 **)(&stack0xffffffd8 + iVar3) = &stack0xffffffe8 + iVar3;
          *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x47847b;
          FUN_00403350(*(int *)(&stack0xffffffd8 + iVar3),*(uint **)(&stack0xffffffdc + iVar3),
                       *(int *)(&stack0xffffffe0 + iVar3),*(uint *)(&stack0xffffffe4 + iVar3));
          uVar2 = *(undefined4 *)(param_2 + 0xc);
          this = *(void **)(iVar5 + 0x30cb);
          *(undefined4 *)(&stack0xffffffe4 + iVar3) = 0;
          *(undefined4 *)(&stack0xffffffe0 + iVar3) = uVar2;
          *(undefined1 **)(&stack0xffffffdc + iVar3) = &stack0xffffffe8 + iVar3;
          *(undefined4 *)(&stack0xffffffd8 + iVar3) = 0x478493;
          iVar5 = FUN_00488ff0(this,*(byte **)(&stack0xffffffdc + iVar3),
                               *(undefined4 *)(&stack0xffffffe0 + iVar3),
                               *(int *)(&stack0xffffffe4 + iVar3));
          return iVar5 != 0;
        }
      }
    }
  }
  return false;
}


/* END FUNCTION 0x004783e0 */

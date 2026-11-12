/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478770
 * Name: FUN_00478770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

float __cdecl FUN_00478770(int *param_1,int param_2)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  float10 fVar6;
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
          *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x478807;
          FUN_00403350(*(int *)(&stack0xffffffd8 + iVar3),*(uint **)(&stack0xffffffdc + iVar3),
                       *(int *)(&stack0xffffffe0 + iVar3),*(uint *)(&stack0xffffffe4 + iVar3));
          pvVar2 = *(void **)(iVar5 + 0x30cb);
          *(undefined1 **)(&stack0xffffffe4 + iVar3) = &stack0xffffffe8 + iVar3;
          *(undefined4 *)(&stack0xffffffe0 + iVar3) = 0x478816;
          fVar6 = FUN_004891b0(pvVar2,*(byte **)(&stack0xffffffe4 + iVar3));
          return (float)fVar6;
        }
      }
    }
  }
  return 0.0;
}


/* END FUNCTION 0x00478770 */

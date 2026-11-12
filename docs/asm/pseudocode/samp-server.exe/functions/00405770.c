/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405770
 * Name: FUN_00405770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00405770(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int aiStackY_34 [2];
  int aiStackY_2c [3];
  
  iVar3 = param_2;
  iVar6 = *(int *)(param_2 + 0xc);
  if (0 < iVar6) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar6 = iVar6 << 2;
    }
    aiStackY_2c[2] = 0x4057a0;
    FUN_00403100(param_1,*(int *)(param_2 + 8),&param_2);
    puVar4 = (undefined1 *)(iVar6 + 3U & 0xfffffffc);
    iVar2 = -(int)puVar4;
    if ((&stack0xffffffec != puVar4) && (param_2 != 0)) {
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar1 = *(undefined4 *)(iVar3 + 4);
        *(undefined1 **)(&stack0xffffffe8 + iVar2) = &stack0xffffffec + iVar2;
        *(undefined4 *)(&stack0xffffffe4 + iVar2) = uVar1;
        *(undefined4 *)(&stack0xffffffe0 + iVar2) = 0x4057d0;
        iVar5 = FUN_00405340(*(FILE **)(&stack0xffffffe4 + iVar2),*(int *)(&stack0xffffffe8 + iVar2)
                            );
        uVar1 = *(undefined4 *)(iVar3 + 0x10);
        *(int *)(&stack0xffffffe0 + iVar2) = iVar6;
        *(undefined4 *)((int)aiStackY_2c + iVar2 + 8) = 0;
        *(undefined4 *)((int)aiStackY_2c + iVar2 + 4) = uVar1;
        *(undefined1 **)((int)aiStackY_2c + iVar2) = &stack0xffffffec + iVar2;
        *(int *)((int)aiStackY_34 + iVar2 + 4) = param_2;
        *(undefined4 *)((int)aiStackY_34 + iVar2) = 0x4057e4;
        FUN_00403250(*(undefined4 **)((int)aiStackY_34 + iVar2 + 4),
                     *(short **)((int)aiStackY_2c + iVar2),*(int *)((int)aiStackY_2c + iVar2 + 4),
                     *(int *)((int)aiStackY_2c + iVar2 + 8),*(uint *)(&stack0xffffffe0 + iVar2));
        return iVar5;
      }
      uVar1 = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(&stack0xffffffe8 + iVar2) = 1;
      *(int *)(&stack0xffffffe4 + iVar2) = iVar6;
      *(undefined4 *)(&stack0xffffffe0 + iVar2) = uVar1;
      *(undefined4 *)((int)aiStackY_2c + iVar2 + 8) = 0x405802;
      iVar6 = FUN_00404ef0(*(FILE **)(&stack0xffffffe0 + iVar2),*(int *)(&stack0xffffffe4 + iVar2),
                           *(int *)(&stack0xffffffe8 + iVar2));
      return iVar6;
    }
    *(undefined4 *)(&stack0xffffffe8 + iVar2) = 10;
    *(int **)(&stack0xffffffe4 + iVar2) = param_1;
    *(undefined4 *)(&stack0xffffffe0 + iVar2) = 0x40581a;
    FUN_004030f0(*(int *)(&stack0xffffffe4 + iVar2),*(undefined4 *)(&stack0xffffffe8 + iVar2));
  }
  return 0;
}


/* END FUNCTION 0x00405770 */

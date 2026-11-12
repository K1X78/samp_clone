/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479bf0
 * Name: FUN_00479bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

byte * __cdecl FUN_00479bf0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uStackY_44;
  byte abStackY_40 [4];
  undefined4 auStackY_3c [2];
  int local_c;
  uint *local_8;
  
  if (DAT_004fc444 != (void *)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
    auStackY_3c[1] = 0x479c33;
    FUN_004031d0(local_8,&local_c);
    puVar6 = local_8;
    if (0 < local_c) {
      puVar7 = (undefined1 *)(local_c + 4U & 0xfffffffc);
      iVar4 = -(int)puVar7;
      if (&stack0xffffffe0 != puVar7) {
        *(int *)(&stack0xffffffdc + iVar4) = local_c + 1;
        *(undefined4 *)(&stack0xffffffd8 + iVar4) = 0;
        *(uint **)(&stack0xffffffd4 + iVar4) = puVar6;
        *(undefined1 **)(&stack0xffffffd0 + iVar4) = &stack0xffffffe0 + iVar4;
        *(undefined4 *)(&stack0xffffffcc + iVar4) = 0x479c66;
        FUN_00403350(*(int *)(&stack0xffffffd0 + iVar4),*(uint **)(&stack0xffffffd4 + iVar4),
                     *(int *)(&stack0xffffffd8 + iVar4),*(uint *)(&stack0xffffffdc + iVar4));
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        *(uint ***)(&stack0xffffffdc + iVar4) = &local_8;
        *(undefined4 *)(&stack0xffffffd8 + iVar4) = uVar3;
        *(int **)(&stack0xffffffd4 + iVar4) = param_1;
        *(undefined4 *)(&stack0xffffffd0 + iVar4) = 0x479c7a;
        FUN_00403100(*(int **)(&stack0xffffffd4 + iVar4),*(int *)(&stack0xffffffd8 + iVar4),
                     *(int **)(&stack0xffffffdc + iVar4));
        puVar6 = local_8;
        *(int **)(&stack0xffffffd0 + iVar4) = &local_c;
        *(uint **)(&stack0xffffffcc + iVar4) = puVar6;
        *(undefined4 *)((int)auStackY_3c + iVar4 + 4) = 0x479c87;
        FUN_004031d0(*(uint **)(&stack0xffffffcc + iVar4),*(int **)(&stack0xffffffd0 + iVar4));
        if (0 < local_c) {
          puVar7 = (undefined1 *)(local_c + 4U & 0xfffffffc);
          *(undefined4 *)(&stack0xffffffdc + iVar4) = 0x479c9f;
          iVar5 = -(int)puVar7;
          if (&stack0xffffffe0 + iVar4 != puVar7) {
            *(int *)(&stack0xffffffdc + iVar5 + iVar4) = local_c + 1;
            *(undefined4 *)(&stack0xffffffd8 + iVar5 + iVar4) = 0;
            *(uint **)(&stack0xffffffd4 + iVar5 + iVar4) = local_8;
            *(undefined1 **)(&stack0xffffffd0 + iVar5 + iVar4) = &stack0xffffffe0 + iVar5 + iVar4;
            *(undefined4 *)(&stack0xffffffcc + iVar5 + iVar4) = 0x479cb2;
            FUN_00403350(*(int *)(&stack0xffffffd0 + iVar5 + iVar4),
                         *(uint **)(&stack0xffffffd4 + iVar5 + iVar4),
                         *(int *)(&stack0xffffffd8 + iVar5 + iVar4),
                         *(uint *)(&stack0xffffffdc + iVar5 + iVar4));
            *(undefined4 *)(&stack0xffffffdc + iVar5 + iVar4) = 0;
            *(undefined4 *)(&stack0xffffffd8 + iVar5 + iVar4) = 0;
            *(undefined1 **)(&stack0xffffffd4 + iVar5 + iVar4) = &stack0xffffffe0 + iVar5 + iVar4;
            *(undefined1 **)(&stack0xffffffd0 + iVar5 + iVar4) = &stack0xffffffe0 + iVar4;
            *(undefined4 *)(&stack0xffffffcc + iVar5 + iVar4) = uVar2;
            *(undefined4 *)((int)auStackY_3c + iVar5 + iVar4 + 4) = uVar1;
            *(undefined4 *)((int)auStackY_3c + iVar5 + iVar4) = 0xffffffff;
            pbVar9 = abStackY_40 + iVar5 + iVar4;
            pbVar9[0] = 1;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
            *(undefined4 *)((int)&uStackY_44 + iVar5 + iVar4) = 0x479cd2;
            pbVar8 = FUN_00497170(DAT_004fc444,abStackY_40[iVar5 + iVar4],
                                  *(undefined4 *)((int)auStackY_3c + iVar5 + iVar4),
                                  *(undefined4 *)((int)auStackY_3c + iVar5 + iVar4 + 4),
                                  *(undefined4 *)(&stack0xffffffcc + iVar5 + iVar4),
                                  *(char **)(&stack0xffffffd0 + iVar5 + iVar4),
                                  *(char **)(&stack0xffffffd4 + iVar5 + iVar4),
                                  (&stack0xffffffd8)[iVar5 + iVar4],
                                  (&stack0xffffffdc)[iVar5 + iVar4]);
            return pbVar8;
          }
        }
      }
    }
  }
  return (byte *)0x0;
}


/* END FUNCTION 0x00479bf0 */

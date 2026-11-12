/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479df0
 * Name: FUN_00479df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

byte * __cdecl FUN_00479df0(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uStackY_4c;
  byte abStackY_48 [4];
  undefined4 auStackY_44 [2];
  int local_c;
  uint *local_8;
  
  if (DAT_004fc444 != (void *)0x0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_8);
    auStackY_44[1] = 0x479e39;
    FUN_004031d0(local_8,&local_c);
    puVar8 = local_8;
    if (0 < local_c) {
      puVar9 = (undefined1 *)(local_c + 4U & 0xfffffffc);
      iVar6 = -(int)puVar9;
      if (&stack0xffffffd8 != puVar9) {
        *(int *)(&stack0xffffffd4 + iVar6) = local_c + 1;
        *(undefined4 *)(&stack0xffffffd0 + iVar6) = 0;
        *(uint **)(&stack0xffffffcc + iVar6) = puVar8;
        *(undefined1 **)(&stack0xffffffc8 + iVar6) = &stack0xffffffd8 + iVar6;
        *(undefined4 *)(&stack0xffffffc4 + iVar6) = 0x479e71;
        FUN_00403350(*(int *)(&stack0xffffffc8 + iVar6),*(uint **)(&stack0xffffffcc + iVar6),
                     *(int *)(&stack0xffffffd0 + iVar6),*(uint *)(&stack0xffffffd4 + iVar6));
        uVar5 = *(undefined4 *)(param_2 + 0x14);
        *(uint ***)(&stack0xffffffd4 + iVar6) = &local_8;
        *(undefined4 *)(&stack0xffffffd0 + iVar6) = uVar5;
        *(int **)(&stack0xffffffcc + iVar6) = param_1;
        *(undefined4 *)(&stack0xffffffc8 + iVar6) = 0x479e82;
        FUN_00403100(*(int **)(&stack0xffffffcc + iVar6),*(int *)(&stack0xffffffd0 + iVar6),
                     *(int **)(&stack0xffffffd4 + iVar6));
        puVar8 = local_8;
        *(int **)(&stack0xffffffc8 + iVar6) = &local_c;
        *(uint **)(&stack0xffffffc4 + iVar6) = puVar8;
        *(undefined4 *)((int)auStackY_44 + iVar6 + 4) = 0x479e8f;
        FUN_004031d0(*(uint **)(&stack0xffffffc4 + iVar6),*(int **)(&stack0xffffffc8 + iVar6));
        if (0 < local_c) {
          iVar11 = local_c + 1;
          puVar9 = (undefined1 *)(local_c + 4U & 0xfffffffc);
          *(undefined4 *)(&stack0xffffffd4 + iVar6) = 0x479ea7;
          puVar8 = local_8;
          iVar7 = -(int)puVar9;
          if (&stack0xffffffd8 + iVar6 != puVar9) {
            *(int *)(&stack0xffffffd4 + iVar7 + iVar6) = iVar11;
            *(undefined4 *)(&stack0xffffffd0 + iVar7 + iVar6) = 0;
            *(uint **)(&stack0xffffffcc + iVar7 + iVar6) = puVar8;
            *(undefined1 **)(&stack0xffffffc8 + iVar7 + iVar6) = &stack0xffffffd8 + iVar7 + iVar6;
            *(undefined4 *)(&stack0xffffffc4 + iVar7 + iVar6) = 0x479eba;
            FUN_00403350(*(int *)(&stack0xffffffc8 + iVar7 + iVar6),
                         *(uint **)(&stack0xffffffcc + iVar7 + iVar6),
                         *(int *)(&stack0xffffffd0 + iVar7 + iVar6),
                         *(uint *)(&stack0xffffffd4 + iVar7 + iVar6));
            uVar1 = *(undefined1 *)(param_2 + 0x18);
            local_c = CONCAT31(local_c._1_3_,*(undefined1 *)(param_2 + 0x1c));
            *(int *)(&stack0xffffffd4 + iVar7 + iVar6) = local_c;
            local_8 = (uint *)CONCAT31(local_8._1_3_,uVar1);
            *(uint **)(&stack0xffffffd0 + iVar7 + iVar6) = local_8;
            *(undefined1 **)(&stack0xffffffcc + iVar7 + iVar6) = &stack0xffffffd8 + iVar7 + iVar6;
            *(undefined1 **)(&stack0xffffffc8 + iVar7 + iVar6) = &stack0xffffffd8 + iVar6;
            *(undefined4 *)(&stack0xffffffc4 + iVar7 + iVar6) = uVar4;
            *(undefined4 *)((int)auStackY_44 + iVar7 + iVar6 + 4) = uVar3;
            *(undefined4 *)((int)auStackY_44 + iVar7 + iVar6) = uVar2;
            pbVar12 = abStackY_48 + iVar7 + iVar6;
            pbVar12[0] = 2;
            pbVar12[1] = 0;
            pbVar12[2] = 0;
            pbVar12[3] = 0;
            *(undefined4 *)((int)&uStackY_4c + iVar7 + iVar6) = 0x479eef;
            pbVar10 = FUN_00497170(DAT_004fc444,abStackY_48[iVar7 + iVar6],
                                   *(undefined4 *)((int)auStackY_44 + iVar7 + iVar6),
                                   *(undefined4 *)((int)auStackY_44 + iVar7 + iVar6 + 4),
                                   *(undefined4 *)(&stack0xffffffc4 + iVar7 + iVar6),
                                   *(char **)(&stack0xffffffc8 + iVar7 + iVar6),
                                   *(char **)(&stack0xffffffcc + iVar7 + iVar6),
                                   (&stack0xffffffd0)[iVar7 + iVar6],
                                   (&stack0xffffffd4)[iVar7 + iVar6]);
            return pbVar10;
          }
        }
      }
    }
  }
  return (byte *)0x0;
}


/* END FUNCTION 0x00479df0 */

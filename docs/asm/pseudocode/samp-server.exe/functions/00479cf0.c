/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479cf0
 * Name: FUN_00479cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

byte * __cdecl FUN_00479cf0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 uStackY_48;
  byte abStackY_44 [4];
  undefined4 auStackY_40 [2];
  int local_c;
  uint *local_8;
  
  if (DAT_004fc444 != (void *)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_8);
    auStackY_40[1] = 0x479d39;
    FUN_004031d0(local_8,&local_c);
    puVar7 = local_8;
    if (0 < local_c) {
      puVar8 = (undefined1 *)(local_c + 4U & 0xfffffffc);
      iVar5 = -(int)puVar8;
      if (&stack0xffffffdc != puVar8) {
        *(int *)(&stack0xffffffd8 + iVar5) = local_c + 1;
        *(undefined4 *)(&stack0xffffffd4 + iVar5) = 0;
        *(uint **)(&stack0xffffffd0 + iVar5) = puVar7;
        *(undefined1 **)(&stack0xffffffcc + iVar5) = &stack0xffffffdc + iVar5;
        *(undefined4 *)(&stack0xffffffc8 + iVar5) = 0x479d6c;
        FUN_00403350(*(int *)(&stack0xffffffcc + iVar5),*(uint **)(&stack0xffffffd0 + iVar5),
                     *(int *)(&stack0xffffffd4 + iVar5),*(uint *)(&stack0xffffffd8 + iVar5));
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        *(uint ***)(&stack0xffffffd8 + iVar5) = &local_8;
        *(undefined4 *)(&stack0xffffffd4 + iVar5) = uVar4;
        *(int **)(&stack0xffffffd0 + iVar5) = param_1;
        *(undefined4 *)(&stack0xffffffcc + iVar5) = 0x479d80;
        FUN_00403100(*(int **)(&stack0xffffffd0 + iVar5),*(int *)(&stack0xffffffd4 + iVar5),
                     *(int **)(&stack0xffffffd8 + iVar5));
        puVar7 = local_8;
        *(int **)(&stack0xffffffcc + iVar5) = &local_c;
        *(uint **)(&stack0xffffffc8 + iVar5) = puVar7;
        *(undefined4 *)((int)auStackY_40 + iVar5 + 4) = 0x479d8d;
        FUN_004031d0(*(uint **)(&stack0xffffffc8 + iVar5),*(int **)(&stack0xffffffcc + iVar5));
        if (0 < local_c) {
          puVar8 = (undefined1 *)(local_c + 4U & 0xfffffffc);
          *(undefined4 *)(&stack0xffffffd8 + iVar5) = 0x479da5;
          iVar6 = -(int)puVar8;
          if (&stack0xffffffdc + iVar5 != puVar8) {
            *(int *)(&stack0xffffffd8 + iVar6 + iVar5) = local_c + 1;
            *(undefined4 *)(&stack0xffffffd4 + iVar6 + iVar5) = 0;
            *(uint **)(&stack0xffffffd0 + iVar6 + iVar5) = local_8;
            *(undefined1 **)(&stack0xffffffcc + iVar6 + iVar5) = &stack0xffffffdc + iVar6 + iVar5;
            *(undefined4 *)(&stack0xffffffc8 + iVar6 + iVar5) = 0x479db8;
            FUN_00403350(*(int *)(&stack0xffffffcc + iVar6 + iVar5),
                         *(uint **)(&stack0xffffffd0 + iVar6 + iVar5),
                         *(int *)(&stack0xffffffd4 + iVar6 + iVar5),
                         *(uint *)(&stack0xffffffd8 + iVar6 + iVar5));
            *(undefined4 *)(&stack0xffffffd8 + iVar6 + iVar5) = 0;
            *(undefined4 *)(&stack0xffffffd4 + iVar6 + iVar5) = 0;
            *(undefined1 **)(&stack0xffffffd0 + iVar6 + iVar5) = &stack0xffffffdc + iVar6 + iVar5;
            *(undefined1 **)(&stack0xffffffcc + iVar6 + iVar5) = &stack0xffffffdc + iVar5;
            *(undefined4 *)(&stack0xffffffc8 + iVar6 + iVar5) = uVar3;
            *(undefined4 *)((int)auStackY_40 + iVar6 + iVar5 + 4) = uVar2;
            *(undefined4 *)((int)auStackY_40 + iVar6 + iVar5) = uVar1;
            pbVar10 = abStackY_44 + iVar6 + iVar5;
            pbVar10[0] = 2;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            *(undefined4 *)((int)&uStackY_48 + iVar6 + iVar5) = 0x479dda;
            pbVar9 = FUN_00497170(DAT_004fc444,abStackY_44[iVar6 + iVar5],
                                  *(undefined4 *)((int)auStackY_40 + iVar6 + iVar5),
                                  *(undefined4 *)((int)auStackY_40 + iVar6 + iVar5 + 4),
                                  *(undefined4 *)(&stack0xffffffc8 + iVar6 + iVar5),
                                  *(char **)(&stack0xffffffcc + iVar6 + iVar5),
                                  *(char **)(&stack0xffffffd0 + iVar6 + iVar5),
                                  (&stack0xffffffd4)[iVar6 + iVar5],
                                  (&stack0xffffffd8)[iVar6 + iVar5]);
            return pbVar9;
          }
        }
      }
    }
  }
  return (byte *)0x0;
}


/* END FUNCTION 0x00479cf0 */

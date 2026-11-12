/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482190
 * Name: FUN_00482190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00482190(int *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uStack_134;
  undefined1 local_110 [260];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  uStack_134 = 0x4821c4;
  FUN_004031d0(param_2,&local_c);
  if (0 < local_c) {
    puVar4 = (undefined1 *)(local_c + 4U & 0xfffffffc);
    iVar6 = -(int)puVar4;
    puVar7 = local_110 + iVar6 + -0xc;
    if (&stack0xfffffee4 != puVar4) {
      *(int *)(local_110 + iVar6 + -0x10) = local_c + 1;
      *(undefined4 *)(local_110 + iVar6 + -0x14) = 0;
      *(uint **)(local_110 + iVar6 + -0x18) = param_2;
      *(undefined1 **)(local_110 + iVar6 + -0x1c) = local_110 + iVar6 + -0xc;
      *(undefined4 *)(local_110 + iVar6 + -0x20) = 0x4821f9;
      FUN_00403350(*(int *)(local_110 + iVar6 + -0x1c),*(uint **)(local_110 + iVar6 + -0x18),
                   *(int *)(local_110 + iVar6 + -0x14),*(uint *)(local_110 + iVar6 + -0x10));
      if (((local_110 + iVar6 + -0xc != &DAT_004b6404) &&
          (cVar2 = local_110[iVar6 + -0xc], cVar2 != '\\')) && (cVar2 != '/')) {
        cVar3 = local_110[iVar6 + -0xb];
        pcVar1 = local_110 + iVar6 + -0xc;
        while (cVar3 != '\0') {
          if ((*pcVar1 == '.') && (pcVar1[1] == '.')) {
            return 0;
          }
          cVar3 = pcVar1[2];
          pcVar1 = pcVar1 + 1;
        }
        while (cVar2 != '\0') {
          if (cVar2 == ':') {
            return 0;
          }
          pcVar1 = puVar7 + 1;
          puVar7 = puVar7 + 1;
          cVar2 = *pcVar1;
        }
        *(undefined1 **)(local_110 + iVar6 + -0x10) = local_110 + iVar6 + -0xc;
        *(char **)(local_110 + iVar6 + -0x14) = "scriptfiles/%s";
        *(undefined1 **)(local_110 + iVar6 + -0x18) = local_110;
        *(undefined4 *)(local_110 + iVar6 + -0x1c) = 0x48225e;
        _sprintf(*(char **)(local_110 + iVar6 + -0x18),*(char **)(local_110 + iVar6 + -0x14));
        *(undefined4 **)(local_110 + iVar6 + -0x1c) = &local_8;
        *(undefined1 **)(local_110 + iVar6 + -0x20) = local_110;
        *(undefined4 *)((int)&uStack_134 + iVar6) = 0x48226e;
        iVar5 = FUN_0043a910(*(char **)(local_110 + iVar6 + -0x20),
                             *(undefined4 **)(local_110 + iVar6 + -0x1c));
        if (iVar5 == 0) {
          *(undefined4 *)(local_110 + iVar6 + -0x10) = local_8;
          *(undefined4 *)(local_110 + iVar6 + -0x14) = 0x4822bb;
          iVar6 = FUN_00482100(&DAT_004fc40c,*(int *)(local_110 + iVar6 + -0x10));
          if (-1 < iVar6) {
            return iVar6 + 1;
          }
        }
        else {
          if (DAT_004fc464 != 0) {
            *(undefined1 **)(local_110 + iVar6 + -0x10) = local_110;
            *(char **)(local_110 + iVar6 + -0x14) = "[Error] Can\'t open sqlite database %s.";
            *(undefined4 *)(local_110 + iVar6 + -0x18) = 0x48228f;
            FUN_00491fa0(*(char **)(local_110 + iVar6 + -0x14));
          }
          *(undefined4 *)(local_110 + iVar6 + -0x10) = local_8;
          *(undefined4 *)(local_110 + iVar6 + -0x14) = 0x48229b;
          FUN_004334e0(*(int *)(local_110 + iVar6 + -0x10));
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00482190 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004055a0
 * Name: FUN_004055a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_004055a0(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int aiStackY_13c [2];
  undefined1 local_114 [260];
  int local_10;
  uint *local_c;
  undefined *local_8;
  
  puVar2 = param_2;
  iVar5 = 0;
  local_8 = (undefined *)0x0;
  switch(*(uint *)(param_2 + 8) & 0x7fff) {
  case 0:
    param_2 = &DAT_004b25a0;
    break;
  case 1:
    param_2 = &DAT_004b259c;
    break;
  case 2:
    param_2 = &DAT_004b2598;
    local_8 = &DAT_004b2594;
    break;
  case 3:
    param_2 = &DAT_004b2590;
    break;
  default:
    return 0;
  }
  FUN_00403100(param_1,*(int *)(puVar2 + 4),(int *)&local_c);
  aiStackY_13c[1] = 0x405613;
  FUN_004031d0(local_c,&local_10);
  if (0 < local_10) {
    puVar3 = (undefined1 *)(local_10 + 4U & 0xfffffffc);
    iVar1 = -(int)puVar3;
    if (&stack0xfffffee0 != puVar3) {
      *(int *)(local_114 + iVar1 + -0x10) = local_10 + 1;
      *(undefined4 *)(local_114 + iVar1 + -0x14) = 0;
      *(uint **)(local_114 + iVar1 + -0x18) = local_c;
      *(undefined1 **)(local_114 + iVar1 + -0x1c) = local_114 + iVar1 + -0xc;
      *(undefined4 *)(local_114 + iVar1 + -0x20) = 0x405640;
      FUN_00403350(*(int *)(local_114 + iVar1 + -0x1c),*(uint **)(local_114 + iVar1 + -0x18),
                   *(int *)(local_114 + iVar1 + -0x14),*(uint *)(local_114 + iVar1 + -0x10));
      *(undefined4 *)(local_114 + iVar1 + -0x20) = 0x104;
      *(undefined1 **)((int)aiStackY_13c + iVar1 + 4) = local_114;
      *(undefined4 *)((int)aiStackY_13c + iVar1) = 0x405653;
      pcVar4 = FUN_004053d0(*(char **)((int)aiStackY_13c + iVar1 + 4),
                            *(char **)(local_114 + iVar1 + -0x20));
      if (pcVar4 != (char *)0x0) {
        *(undefined **)(local_114 + iVar1 + -0x10) = param_2;
        *(undefined1 **)(local_114 + iVar1 + -0x14) = local_114;
        *(undefined4 *)(local_114 + iVar1 + -0x18) = 0x40566a;
        iVar5 = FUN_0049fbe9(*(char **)(local_114 + iVar1 + -0x14),
                             *(char **)(local_114 + iVar1 + -0x10));
        if ((iVar5 == 0) && (local_8 != (undefined *)0x0)) {
          *(undefined **)(local_114 + iVar1 + -0x10) = local_8;
          *(undefined1 **)(local_114 + iVar1 + -0x14) = local_114;
          *(undefined4 *)(local_114 + iVar1 + -0x18) = 0x405687;
          iVar5 = FUN_0049fbe9(*(char **)(local_114 + iVar1 + -0x14),
                               *(char **)(local_114 + iVar1 + -0x10));
        }
      }
    }
  }
  return iVar5;
}


/* END FUNCTION 0x004055a0 */

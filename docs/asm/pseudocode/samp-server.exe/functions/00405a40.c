/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405a40
 * Name: FUN_00405a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_00405a40(int *param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int aiStackY_134 [2];
  undefined1 local_10c [260];
  int local_8;
  
  iVar4 = 1;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  aiStackY_134[1] = 0x405a72;
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    puVar2 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    iVar1 = -(int)puVar2;
    if (&stack0xfffffee8 != puVar2) {
      *(int *)(local_10c + iVar1 + -0x10) = local_8 + 1;
      *(undefined4 *)(local_10c + iVar1 + -0x14) = 0;
      *(uint **)(local_10c + iVar1 + -0x18) = param_2;
      *(undefined1 **)(local_10c + iVar1 + -0x1c) = local_10c + iVar1 + -0xc;
      *(undefined4 *)(local_10c + iVar1 + -0x20) = 0x405a9f;
      FUN_00403350(*(int *)(local_10c + iVar1 + -0x1c),*(uint **)(local_10c + iVar1 + -0x18),
                   *(int *)(local_10c + iVar1 + -0x14),*(uint *)(local_10c + iVar1 + -0x10));
      *(undefined4 *)(local_10c + iVar1 + -0x20) = 0x104;
      *(undefined1 **)((int)aiStackY_134 + iVar1 + 4) = local_10c;
      *(undefined4 *)((int)aiStackY_134 + iVar1) = 0x405ab2;
      pcVar3 = FUN_004053d0(*(char **)((int)aiStackY_134 + iVar1 + 4),
                            *(char **)(local_10c + iVar1 + -0x20));
      if (pcVar3 != (char *)0x0) {
        *(undefined4 *)(local_10c + iVar1 + -0x10) = 0;
        *(undefined1 **)(local_10c + iVar1 + -0x14) = local_10c;
        *(undefined4 *)(local_10c + iVar1 + -0x18) = 0x405ac7;
        iVar4 = FUN_004a6afb(*(LPCSTR *)(local_10c + iVar1 + -0x14),local_10c[iVar1 + -0x10]);
      }
    }
  }
  return iVar4 == 0;
}


/* END FUNCTION 0x00405a40 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473c80
 * Name: FUN_00473c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00473c80(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int local_8;
  
  puVar2 = param_2;
  if (*param_2 < 0x10) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d < 4): ");
    return 0;
  }
  if (0x410 < *param_2) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d > 260): ");
    return 0;
  }
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    pcVar4 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      *(int *)(&stack0xffffffe8 + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0;
      *(uint **)(&stack0xffffffe0 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar1) = &stack0xffffffec;
      *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0x473d17;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar1),*(uint **)(&stack0xffffffe0 + iVar1),
                   *(int *)(&stack0xffffffe4 + iVar1),*(uint *)(&stack0xffffffe8 + iVar1));
      goto LAB_00473d1e;
    }
  }
  pcVar4 = (char *)0x0;
LAB_00473d1e:
  uVar3 = FUN_00482fd0(*(void **)(DAT_004fc438 + 0x3c),pcVar4,puVar2[2],puVar2[3],puVar2,param_1);
  return uVar3;
}


/* END FUNCTION 0x00473c80 */

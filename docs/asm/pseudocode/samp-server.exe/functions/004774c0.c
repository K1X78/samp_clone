/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004774c0
 * Name: FUN_004774c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_004774c0(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  int local_8;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      *(int *)(&stack0xffffffe8 + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0;
      *(uint **)(&stack0xffffffe0 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar1) = &stack0xffffffec;
      *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0x477515;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar1),*(uint **)(&stack0xffffffe0 + iVar1),
                   *(int *)(&stack0xffffffe4 + iVar1),*(uint *)(&stack0xffffffe8 + iVar1));
      goto LAB_0047751c;
    }
  }
  pcVar3 = (char *)0x0;
LAB_0047751c:
  uVar4 = puVar2[3];
  pcVar3 = (char *)FUN_00490ba0(DAT_004fc43c,pcVar3);
  FUN_0046fcb0(param_1,puVar2[2],pcVar3,uVar4);
  return;
}


/* END FUNCTION 0x004774c0 */

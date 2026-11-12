/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004056e0
 * Name: FUN_004056e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_004056e0(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_8;
  
  puVar2 = param_2;
  iVar4 = 0;
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (local_8 == 0) {
    return 0;
  }
  if (*param_2 < 0x1000000) {
    iVar4 = FUN_00405120(1);
  }
  else {
    puVar3 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    iVar1 = -(int)puVar3;
    if (&stack0xfffffff0 != puVar3) {
      *(uint *)(&stack0xffffffec + iVar1) = puVar2[1];
      *(undefined1 **)(&stack0xffffffe8 + iVar1) = &stack0xfffffff0 + iVar1;
      *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0x405747;
      iVar4 = _fputs(*(char **)(&stack0xffffffe8 + iVar1),*(FILE **)(&stack0xffffffec + iVar1));
      return iVar4;
    }
  }
  return iVar4;
}


/* END FUNCTION 0x004056e0 */

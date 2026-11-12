/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404df0
 * Name: FUN_00404df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_00404df0(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *local_14;
  int local_10;
  long local_c;
  uint *local_8;
  
  local_c = 0x26ca;
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_14);
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_10);
  if (0 < local_10) {
    iVar3 = -(local_10 + 4U & 0xfffffffc);
    if (&stack0x00000000 != (undefined1 *)0x20) {
      *(int *)(&stack0xffffffdc + iVar3) = local_10 + 1;
      *(undefined4 *)(&stack0xffffffd8 + iVar3) = 0;
      *(uint **)(&stack0xffffffd4 + iVar3) = local_8;
      *(undefined1 **)(&stack0xffffffd0 + iVar3) = &stack0xffffffe0;
      *(undefined4 *)(&stack0xffffffcc + iVar3) = 0x404e60;
      FUN_00403350(*(int *)(&stack0xffffffd0 + iVar3),*(uint **)(&stack0xffffffd4 + iVar3),
                   *(int *)(&stack0xffffffd8 + iVar3),*(uint *)(&stack0xffffffdc + iVar3));
      *(undefined4 *)(&stack0xffffffdc + iVar3) = 0x3a;
      *(undefined1 **)(&stack0xffffffd8 + iVar3) = &stack0xffffffe0;
      *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x404e6b;
      pcVar1 = _strchr(*(char **)(&stack0xffffffd8 + iVar3),*(int *)(&stack0xffffffdc + iVar3));
      if (pcVar1 != (char *)0x0) {
        *(int *)(&stack0xffffffdc + iVar3) = (int)pcVar1[1];
        *(undefined4 *)(&stack0xffffffd8 + iVar3) = 0x404e81;
        iVar2 = _isdigit(*(int *)(&stack0xffffffdc + iVar3));
        if (iVar2 != 0) {
          *(char **)(&stack0xffffffdc + iVar3) = pcVar1 + 1;
          *pcVar1 = '\0';
          *(undefined4 *)(&stack0xffffffd8 + iVar3) = 0x404e91;
          local_c = _atol(*(char **)(&stack0xffffffdc + iVar3));
        }
      }
    }
  }
  iVar3 = FUN_00404be0((u_short)local_c,local_14,*(int *)(param_2 + 8) << 2);
  return 0 < iVar3;
}


/* END FUNCTION 0x00404df0 */

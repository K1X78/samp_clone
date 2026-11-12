/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482860
 * Name: FUN_00482860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00482860(void *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_4;
  
  local_4 = param_1;
  piVar2 = (int *)FUN_004827f0(param_1,&local_4,(uint *)&stack0x00000004);
  iVar1 = *piVar2;
  if (iVar1 != *(int *)((int)param_1 + 4)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x103) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10b) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x107) = 0;
  }
  return;
}


/* END FUNCTION 0x00482860 */

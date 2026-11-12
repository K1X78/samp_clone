/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ad10
 * Name: FUN_0042ad10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042ad10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_0040c2c0();
  iVar2 = FUN_0042a7d0(0);
  if (iVar2 != 0) {
    FUN_00428220(param_1);
  }
  if (*(char *)(param_1 + 8) == '\x02') {
    iVar3 = FUN_00426e90();
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
    iVar3 = FUN_004238d0((void *)0x1,(int *)&local_4);
    if (iVar3 == 0) {
      local_4 = FUN_00408f80();
      if (local_4 == 0) {
        FUN_00414010(&local_4);
      }
      *(uint *)(iVar1 + 0x28) = local_4;
      FUN_00427610();
    }
    *(undefined1 *)(iVar1 + 0x22) = 1;
  }
  FUN_00428180();
  FUN_0040c340();
  return iVar2;
}


/* END FUNCTION 0x0042ad10 */

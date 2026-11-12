/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046bdd0
 * Name: FUN_0046bdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046bdd0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  iVar2 = param_3;
  local_4 = 1;
  iVar4 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_00401710(piVar1,(byte *)"OnScriptCash",&param_3);
      if (iVar3 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),iVar2);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar4 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar4 * 4),&local_4,param_3);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return local_4;
}


/* END FUNCTION 0x0046bdd0 */

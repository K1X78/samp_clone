/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046ada0
 * Name: FUN_0046ada0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046ada0(void *this,byte *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  pbVar2 = param_1;
  local_4 = 0;
  iVar4 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_00401710(piVar1,pbVar2,(int *)&param_1);
      if (iVar3 == 0) {
        FUN_00401c90(*(int **)((int)this + iVar4 * 4),&local_4,(int)param_1);
        if (local_4 == 0) {
          return 0;
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return local_4;
}


/* END FUNCTION 0x0046ada0 */

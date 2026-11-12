/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046b8b0
 * Name: FUN_0046b8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046b8b0(void *this,short *param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  psVar2 = param_1;
  local_c = 1;
  iVar4 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_00401710(piVar1,(byte *)"OnRconCommand",(int *)&param_1);
      if (iVar3 == 0) {
        FUN_00403610(*(int **)((int)this + iVar4 * 4),&local_4,&local_8,psVar2,(undefined4 *)0x0,0);
        FUN_00401c90(*(int **)((int)this + iVar4 * 4),&local_c,(int)param_1);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return local_c;
}


/* END FUNCTION 0x0046b8b0 */

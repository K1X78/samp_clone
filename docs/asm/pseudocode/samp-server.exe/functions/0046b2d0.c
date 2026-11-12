/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046b2d0
 * Name: FUN_0046b2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046b2d0(void *this,int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  undefined4 local_4;
  
  psVar3 = param_2;
  iVar2 = param_1;
  iVar5 = 0;
  local_8 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar5 * 4);
    if (piVar1 != (int *)0x0) {
      iVar4 = FUN_00401710(piVar1,(byte *)"OnPlayerCommandText",(int *)&param_2);
      if (iVar4 == 0) {
        FUN_00403610(*(int **)((int)this + iVar5 * 4),&param_1,&local_4,psVar3,(undefined4 *)0x0,0);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),iVar2);
        FUN_00401c90(*(int **)((int)this + iVar5 * 4),&local_8,(int)param_2);
        FUN_004031b0(*(int *)((int)this + iVar5 * 4),param_1);
        if (local_8 != 0) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return local_8;
}


/* END FUNCTION 0x0046b2d0 */

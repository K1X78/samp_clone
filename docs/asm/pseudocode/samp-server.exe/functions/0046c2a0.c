/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046c2a0
 * Name: FUN_0046c2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046c2a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            short *param_5)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  undefined4 local_4;
  
  psVar3 = param_5;
  iVar2 = param_4;
  iVar5 = 0;
  local_8 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar5 * 4);
    if (piVar1 != (int *)0x0) {
      iVar4 = FUN_00401710(piVar1,(byte *)"OnDialogResponse",(int *)&param_5);
      if (iVar4 == 0) {
        FUN_00403610(*(int **)((int)this + iVar5 * 4),&param_4,&local_4,psVar3,(undefined4 *)0x0,0);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),iVar2);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_3);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar5 * 4),&local_8,(int)param_5);
        FUN_004031b0(*(int *)((int)this + iVar5 * 4),param_4);
        if (local_8 != 0) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return local_8;
}


/* END FUNCTION 0x0046c2a0 */

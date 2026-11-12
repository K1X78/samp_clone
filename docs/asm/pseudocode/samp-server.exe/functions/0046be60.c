/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046be60
 * Name: FUN_0046be60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046be60(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  int *piVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  uint local_4;
  
  uVar3 = param_3;
  psVar2 = param_2;
  iVar5 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar5 * 4);
    if (piVar1 != (int *)0x0) {
      iVar4 = FUN_00401710(piVar1,(byte *)"OnRconLoginAttempt",(int *)&param_2);
      if (iVar4 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),uVar3);
        FUN_00403610(*(int **)((int)this + iVar5 * 4),&local_c,&param_3,psVar2,(undefined4 *)0x0,0);
        FUN_00403610(*(int **)((int)this + iVar5 * 4),&local_8,&param_3,param_1,(undefined4 *)0x0,0)
        ;
        FUN_00401c90(*(int **)((int)this + iVar5 * 4),&local_4,(int)param_2);
        FUN_004031b0(*(int *)((int)this + iVar5 * 4),local_c);
        FUN_004031b0(*(int *)((int)this + iVar5 * 4),local_8);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return 1;
}


/* END FUNCTION 0x0046be60 */

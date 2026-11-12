/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046cec0
 * Name: FUN_0046cec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046cec0(void *this,undefined4 param_1,short *param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  psVar2 = param_2;
  iVar5 = 0;
  local_8 = 0;
  do {
    piVar1 = *(int **)((int)this + iVar5 * 4);
    if (piVar1 != (int *)0x0) {
      iVar4 = FUN_00401710(piVar1,(byte *)"OnIncomingConnection",&param_3);
      if (iVar4 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),iVar3);
        FUN_00403610(*(int **)((int)this + iVar5 * 4),(int *)&param_2,&local_4,psVar2,
                     (undefined4 *)0x0,0);
        FUN_00401c50(*(int **)((int)this + iVar5 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar5 * 4),&local_8,param_3);
        FUN_004031b0(*(int *)((int)this + iVar5 * 4),(int)param_2);
        if (local_8 != 0) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return local_8;
}


/* END FUNCTION 0x0046cec0 */

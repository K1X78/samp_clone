/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046b200
 * Name: FUN_0046b200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046b200(void *this,undefined4 param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint local_c;
  uint *local_8;
  int local_4;
  
  psVar4 = param_2;
  local_c = 1;
  iVar1 = (int)param_2 + 1;
  psVar5 = param_2;
  do {
    sVar3 = *psVar5;
    psVar5 = (short *)((int)psVar5 + 1);
  } while ((char)sVar3 != '\0');
  iVar7 = 0;
  do {
    piVar2 = *(int **)((int)this + iVar7 * 4);
    if (piVar2 != (int *)0x0) {
      iVar6 = FUN_00401710(piVar2,(byte *)"OnPlayerText",(int *)&param_2);
      if (iVar6 == 0) {
        FUN_00403610(*(int **)((int)this + iVar7 * 4),&local_4,&local_8,psVar4,(undefined4 *)0x0,0);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar7 * 4),&local_c,(int)param_2);
        FUN_00403350((int)psVar4,local_8,0,(uint)((int)psVar5 + (1 - iVar1)));
        FUN_004031b0(*(int *)((int)this + iVar7 * 4),local_4);
        if (local_c == 0) {
          return 0;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return local_c;
}


/* END FUNCTION 0x0046b200 */

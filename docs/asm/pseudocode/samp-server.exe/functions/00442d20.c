/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442d20
 * Name: FUN_00442d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00442d20(void *this,int *param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)this;
  uVar2 = FUN_00442130();
  if (uVar2 == 0) {
    if (in_EAX == 0) {
      FUN_00440220((byte *)0x0);
      return;
    }
    if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
      pbVar3 = (byte *)FUN_00416430();
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      piVar4 = FUN_0041b6e0(iVar1,0,*(byte *)(*(int *)(*(int *)(iVar1 + 8) + 0xc) + 0x49));
      if (piVar4 != (int *)0x0) {
        FUN_00440220(pbVar3);
        FUN_00408130(iVar1);
        return;
      }
      FUN_00408130(iVar1);
    }
    iVar5 = FUN_0041ad60(this,&local_8);
    if ((-1 < iVar5) && (local_4 = iVar5, pcVar6 = (char *)FUN_00416430(), pcVar6 != (char *)0x0)) {
      pbVar3 = *(byte **)(iVar5 * 0x10 + *(int *)(iVar1 + 8));
      iVar5 = FUN_0040edd0(iVar1,pcVar6,pbVar3);
      if (iVar5 != 0) {
        FUN_004401c0(iVar5,(byte *)0x0);
        FUN_00408130(iVar1);
        return;
      }
      piVar4 = (int *)FUN_0040ee60(pcVar6,pbVar3);
      FUN_00408130(iVar1);
      if (piVar4 != (int *)0x0) {
        FUN_0042cdb0((byte)local_4,0);
        FUN_0043fff0(piVar4,-1);
        return;
      }
      FUN_00418b00((undefined **)"unable to identify the object to be reindexed");
    }
  }
  return;
}


/* END FUNCTION 0x00442d20 */

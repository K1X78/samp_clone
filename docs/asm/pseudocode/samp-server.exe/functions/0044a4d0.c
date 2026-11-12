/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044a4d0
 * Name: FUN_0044a4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0044a4d0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  int local_18 [2];
  undefined1 local_10 [16];
  
  iVar1 = *(int *)this;
  if (0 < *(int *)((int)this + 0x1c8)) {
    FUN_00418b00((undefined **)"parameters are not allowed in views");
    FUN_0040fce0(iVar1,(int)param_3);
    return;
  }
  FUN_004427a0(this,param_4,1,0,param_5);
  iVar2 = *(int *)((int)this + 0x200);
  if (iVar2 != 0) {
    FUN_0041ad60(this,local_18);
    FUN_0040fc30(iVar1);
    iVar3 = FUN_0040ecb0(local_10,&DAT_004b9640,local_18[0]);
    if ((iVar3 != 0) && (iVar3 = FUN_0041a910(extraout_ECX,(int)param_3), iVar3 != 0)) {
      FUN_0040fce0(iVar1,(int)param_3);
      return;
    }
    puVar4 = FUN_0041a470(iVar1,param_3,1);
    *(undefined4 **)(iVar2 + 0x1c) = puVar4;
    FUN_0040fce0(iVar1,(int)param_3);
    if (*(char *)(iVar1 + 0x1e) == '\0') {
      if (*(char *)(iVar1 + 0x7c) == '\0') {
        FUN_00446950(this,iVar2);
      }
      pcVar5 = *(char **)((int)this + 500);
      if ((*pcVar5 != '\0') && (*pcVar5 != ';')) {
        pcVar5 = pcVar5 + *(int *)((int)this + 0x1f8);
      }
      iVar1 = *param_1;
      local_18[0] = (int)pcVar5 - iVar1;
      while ((0 < local_18[0] && (((&DAT_004b29c8)[*(byte *)(iVar1 + -1 + local_18[0])] & 1) != 0)))
      {
        local_18[0] = local_18[0] + -1;
      }
      local_18[0] = iVar1 + -1 + local_18[0];
      local_18[1] = 1;
      FUN_004465f0(0,(int)local_18,(int *)0x0);
    }
    return;
  }
  FUN_0040fce0(iVar1,(int)param_3);
  return;
}


/* END FUNCTION 0x0044a4d0 */

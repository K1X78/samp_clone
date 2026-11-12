/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00444ee0
 * Name: FUN_00444ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00444ee0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_EBX;
  int local_28;
  int *local_24;
  int local_1c;
  
  iVar1 = *unaff_EBX;
  pvVar2 = (void *)unaff_EBX[3];
  pcVar5 = (char *)FUN_004103b0(iVar1);
  FUN_0041a000("_rowid_",extraout_ECX,0x1a);
  local_24 = FUN_0041a560((int *)0x0);
  if (param_3 != (undefined4 *)0x0) {
    FUN_00420310(iVar1,param_3,0);
    local_24 = FUN_0041a560(local_24);
  }
  local_28 = 0;
  if (0 < *(int *)(in_EAX + 0xc)) {
    local_1c = 0;
    do {
      iVar3 = *(int *)(param_4 + local_28 * 4);
      if (iVar3 < 0) {
        FUN_0041a000(*(void **)(*(int *)(in_EAX + 0x10) + local_1c),iVar1,0x1a);
      }
      else {
        FUN_00420310(iVar1,*(undefined4 **)(*(int *)(param_2 + 0xc) + iVar3 * 0x14),0);
      }
      local_24 = FUN_0041a560(local_24);
      local_28 = local_28 + 1;
      local_1c = local_1c + 0x18;
    } while (local_28 < *(int *)(in_EAX + 0xc));
  }
  piVar6 = FUN_0041bff0(unaff_EBX,param_1,param_5,0,0,0,0,0,0);
  iVar3 = unaff_EBX[0x11];
  unaff_EBX[0x11] = iVar3 + 1;
  FUN_00414e70(iVar3,0x29);
  pbVar7 = (byte *)FUN_0040fcc0(extraout_ECX_00,iVar3,8);
  FUN_00443d60(unaff_EBX,piVar6,pbVar7);
  iVar4 = unaff_EBX[0x12];
  iVar8 = iVar4 + 1;
  unaff_EBX[0x12] = iVar8;
  unaff_EBX[0x12] = *(int *)(in_EAX + 0xc) + 1 + iVar8;
  FUN_00414e70(iVar3,0x41);
  FUN_00414dd0(0x1c,iVar3,0,iVar8);
  FUN_00414dd0(0x1c,iVar3,(uint)(param_3 != (undefined4 *)0x0),iVar4 + 2);
  local_28 = 0;
  if (0 < *(int *)(in_EAX + 0xc)) {
    do {
      FUN_00414dd0(0x1c,iVar3,(param_3 != (undefined4 *)0x0) + 1 + local_28,iVar4 + 3 + local_28);
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(in_EAX + 0xc));
  }
  FUN_00416ed0();
  FUN_004197c0(*(int *)(in_EAX + 0xc) + 2,0,0x85,pcVar5,-10);
  FUN_0040f330((int)unaff_EBX);
  FUN_00414e70(iVar3,0x43);
  FUN_0040d680(pvVar2);
  FUN_00414e70(iVar3,0x2b);
  FUN_0040fce0(iVar1,(int)piVar6);
  return;
}


/* END FUNCTION 0x00444ee0 */

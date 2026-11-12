/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004240a0
 * Name: FUN_004240a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004240a0(int *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar6 = in_EAX * 0x14;
  pcVar5 = *(char **)(iVar6 + *(int *)(param_3 + 0xc));
  if ((*pcVar5 == -0x68) || (*param_2 == 'G')) {
    if (((pcVar5[3] & 4U) == 0) && (iVar6 = *(int *)(pcVar5 + 4), iVar6 != 0)) {
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      puVar4 = (undefined4 *)FUN_00420310(iVar1,(undefined4 *)pcVar5,0);
      *(int *)(pcVar5 + 4) = iVar6;
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      *(byte *)((int)puVar4 + 0x22) = *(byte *)((int)puVar4 + 0x22) | 1;
      pcVar5 = FUN_00412a70();
      puVar4[1] = pcVar5;
    }
    else {
      puVar4 = (undefined4 *)FUN_00420310(iVar1,(undefined4 *)pcVar5,0);
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
    }
  }
  else {
    FUN_00420310(iVar1,(undefined4 *)pcVar5,0);
    puVar4 = FUN_0041a0a0(param_1);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    if (*(short *)(iVar6 + 0x10 + *(int *)(param_3 + 0xc)) == 0) {
      iVar2 = param_1[0x77];
      param_1[0x77] = iVar2 + 1;
      *(short *)(iVar6 + 0x10 + *(int *)(param_3 + 0xc)) = (short)(iVar2 + 1);
    }
    puVar4[6] = (uint)*(ushort *)(iVar6 + 0x10 + *(int *)(param_3 + 0xc));
  }
  if ((*(ushort *)((int)param_4 + 2) & 0x100) != 0) {
    uVar3 = param_4[5];
    *(ushort *)((int)puVar4 + 2) = *(ushort *)((int)puVar4 + 2) | 0x100;
    puVar4[5] = uVar3;
  }
  *(byte *)((int)param_4 + 3) = *(byte *)((int)param_4 + 3) | 0x40;
  FUN_004158d0(iVar1,(int)param_4);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_4 = *puVar4;
    puVar4 = puVar4 + 1;
    param_4 = param_4 + 1;
  }
  FUN_00408130(iVar1);
  return;
}


/* END FUNCTION 0x004240a0 */

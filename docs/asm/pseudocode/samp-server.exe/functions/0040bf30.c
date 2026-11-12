/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bf30
 * Name: FUN_0040bf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040bf30(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint local_70;
  uint local_6c;
  uint local_68 [26];
  
  uVar1 = *param_4;
  uVar4 = 0;
  iVar5 = 0;
  local_70 = 0;
  local_6c = 0;
  puVar6 = local_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (0 < (int)uVar1) {
    do {
      iVar5 = 0;
      local_70 = 1;
      uVar2 = uVar4 & 1;
      local_6c = param_3;
      while (uVar2 != 0) {
        FUN_0040be70(local_68[iVar5 * 2],param_1,(undefined4 *)local_68[iVar5 * 2 + 1],
                     local_68[iVar5 * 2],(int *)&local_6c,&local_70,param_2);
        iVar5 = iVar5 + 1;
        uVar2 = uVar4 & 1 << ((byte)iVar5 & 0x1f);
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 2;
      local_68[iVar5 * 2 + 1] = local_6c;
      local_68[iVar5 * 2] = local_70;
    } while ((int)uVar4 < (int)uVar1);
  }
  iVar5 = iVar5 + 1;
  if (iVar5 < 0xd) {
    do {
      if ((uVar1 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
        FUN_0040be70(local_68[iVar5 * 2 + 1],param_1,(undefined4 *)local_68[iVar5 * 2 + 1],
                     local_68[iVar5 * 2],(int *)&local_6c,&local_70,param_2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xd);
    *param_4 = local_70;
    return;
  }
  *param_4 = local_70;
  return;
}


/* END FUNCTION 0x0040bf30 */

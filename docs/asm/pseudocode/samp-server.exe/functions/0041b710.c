/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b710
 * Name: FUN_0041b710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * __cdecl
FUN_0041b710(int param_1,byte *param_2,uint param_3,int param_4,undefined1 param_5,int param_6)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar4;
  short *psVar5;
  byte *pbVar6;
  int local_c;
  
  psVar5 = (short *)0x0;
  local_c = 0;
  psVar2 = (short *)FUN_0040f400((void *)(param_1 + 0x134),param_2);
  uVar1 = extraout_ECX;
  for (; psVar2 != (short *)0x0; psVar2 = *(short **)(psVar2 + 4)) {
    iVar3 = FUN_0040f390(uVar1,psVar2);
    if (local_c < iVar3) {
      psVar5 = psVar2;
      local_c = iVar3;
    }
    uVar1 = extraout_ECX_00;
  }
  if (param_6 == 0) {
    if ((psVar5 == (short *)0x0) || ((*(uint *)(param_1 + 0xc) & 0x10000000) != 0)) {
      local_c = 0;
      psVar2 = (short *)FUN_0040f400(&DAT_004ed290,param_2);
      uVar1 = extraout_ECX_01;
      for (; psVar2 != (short *)0x0; psVar2 = *(short **)(psVar2 + 4)) {
        iVar3 = FUN_0040f390(uVar1,psVar2);
        if (local_c < iVar3) {
          psVar5 = psVar2;
          local_c = iVar3;
        }
        uVar1 = extraout_ECX_02;
      }
    }
  }
  else if ((local_c < 6) || (*psVar5 != param_4)) {
    psVar5 = (short *)FUN_00417b70();
    if (psVar5 == (short *)0x0) {
      return (short *)0x0;
    }
    *psVar5 = (short)param_4;
    uVar4 = param_3 >> 2;
    *(undefined1 *)(psVar5 + 1) = param_5;
    *(short **)(psVar5 + 0xc) = psVar5 + 0x10;
    pbVar6 = (byte *)(psVar5 + 0x10);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar6 = *param_2;
      param_2 = param_2 + 1;
      pbVar6 = pbVar6 + 1;
    }
    *(undefined1 *)(param_3 + *(int *)(psVar5 + 0xc)) = 0;
    FUN_0040f440((void *)(param_1 + 0x134));
  }
  if ((psVar5 != (short *)0x0) &&
     (((*(int *)(psVar5 + 8) != 0 || (*(int *)(psVar5 + 6) != 0)) || (param_6 != 0)))) {
    return psVar5;
  }
  return (short *)0x0;
}


/* END FUNCTION 0x0041b710 */

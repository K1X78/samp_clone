/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014240
 * Name: FUN_10014240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014240(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  DWORD DVar5;
  float *pfVar6;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if ((((*(int *)(param_1 + 4) != 0) && (iVar4 = FUN_1009f210(), iVar4 != 0)) &&
      (*(int *)(param_1 + 0x1c) == 0)) &&
     (((DAT_102aca3c == 0 || (*(int *)(DAT_102aca3c + 0x59) != 0)) &&
      (iVar4 = FUN_100ad890(), iVar4 == 0)))) {
    FUN_1009e950(local_40);
    DVar5 = GetTickCount();
    if (1000 < DVar5 - *(int *)(param_1 + 0x1e1)) {
      pfVar6 = (float *)FUN_1009c470(*(undefined1 *)(*(int *)(param_1 + 4) + 0x2b0));
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *(DWORD *)(param_1 + 0x1e1) = DVar5;
      *(float *)(param_1 + 0x1d5) = (fVar1 * 20.0 + local_10) - local_10;
      *(float *)(param_1 + 0x1d9) = (fVar2 * 20.0 + local_c) - local_c;
      *(float *)(param_1 + 0x1dd) = (fVar3 * 20.0 + local_8) - local_8;
    }
    if (200 < DVar5 - *(int *)(param_1 + 0x1e5)) {
      local_4c = local_10 + *(float *)(param_1 + 0x1d5);
      local_48 = local_c + *(float *)(param_1 + 0x1d9);
      local_44 = local_8 + *(float *)(param_1 + 0x1dd);
      FUN_100adbd0("FollowPedSA",0,1000,0xffffffff,&local_4c,0,0x3dcccccd,500,3,0);
      *(DWORD *)(param_1 + 0x1e5) = DVar5;
    }
  }
  return;
}


/* END FUNCTION 0x10014240 */

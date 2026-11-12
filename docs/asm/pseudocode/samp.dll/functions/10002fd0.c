/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002fd0
 * Name: FUN_10002fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002fd0(int *param_1)

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
  
  if (((*param_1 != 0) &&
      (((DAT_102aca3c == 0 || (*(int *)(DAT_102aca3c + 0x59) != 0)) &&
       (iVar4 = FUN_100ad890(), iVar4 == 0)))) &&
     ((DAT_102ac9f0 == 0 || (*(int *)(DAT_102ac9f0 + 0x80) == 0)))) {
    FUN_1009e950(local_40);
    DVar5 = GetTickCount();
    if (1000 < DVar5 - param_1[0x48]) {
      pfVar6 = (float *)FUN_1009c400();
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      param_1[0x48] = DVar5;
      param_1[0x45] = (int)((fVar1 * 20.0 + local_10) - local_10);
      param_1[0x46] = (int)((fVar2 * 20.0 + local_c) - local_c);
      param_1[0x47] = (int)((fVar3 * 20.0 + local_8) - local_8);
    }
    if (200 < DVar5 - param_1[0x49]) {
      local_4c = local_10 + (float)param_1[0x45];
      local_48 = local_c + (float)param_1[0x46];
      local_44 = local_8 + (float)param_1[0x47];
      FUN_100adbd0("FollowPedSA",0,2000,0xffffffff,&local_4c,0,0x3dcccccd,500,3,0);
      param_1[0x49] = DVar5;
    }
  }
  return;
}


/* END FUNCTION 0x10002fd0 */

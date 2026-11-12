/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401710
 * Name: FUN_00401710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401710(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  int local_24;
  byte local_20 [32];
  
  FUN_00401690(param_1,&local_24);
  local_24 = local_24 + -1;
  iVar4 = 0;
  if (-1 < local_24) {
    do {
      iVar6 = (local_24 + iVar4) / 2;
      FUN_004016b0(param_1,iVar6,(char *)local_20);
      pbVar2 = local_20;
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00401784:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00401789;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00401784;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00401789:
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          *param_3 = iVar6;
          return 0;
        }
        iVar4 = iVar6 + 1;
      }
      else {
        local_24 = iVar6 + -1;
      }
    } while (iVar4 <= local_24);
  }
  *param_3 = 0x7fffffff;
  return 0x13;
}


/* END FUNCTION 0x00401710 */

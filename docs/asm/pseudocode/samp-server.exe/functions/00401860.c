/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401860
 * Name: FUN_00401860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401860(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int local_24;
  byte local_20 [32];
  
  FUN_004017d0(param_1,&local_24);
  iVar4 = local_24 + -1;
  iVar5 = 0;
  if (-1 < iVar4) {
    do {
      iVar7 = (iVar4 + iVar5) / 2;
      FUN_004017f0(param_1,iVar7,(char *)local_20,&local_24);
      pbVar2 = local_20;
      pbVar6 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004018d4:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004018d9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004018d4;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004018d9:
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          *param_3 = local_24;
          return 0;
        }
        iVar5 = iVar7 + 1;
      }
      else {
        iVar4 = iVar7 + -1;
      }
    } while (iVar5 <= iVar4);
  }
  *param_3 = 0;
  return 0x13;
}


/* END FUNCTION 0x00401860 */

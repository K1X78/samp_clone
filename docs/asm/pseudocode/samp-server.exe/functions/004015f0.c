/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004015f0
 * Name: FUN_004015f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004015f0(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  int local_24;
  byte local_20 [32];
  
  FUN_00401570(param_1,&local_24);
  iVar5 = 0;
  if (0 < local_24) {
    do {
      FUN_00401590(param_1,iVar5,(char *)local_20);
      pbVar2 = local_20;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00401654:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00401659;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00401654;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00401659:
      if (iVar3 == 0) {
        *param_3 = iVar5;
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_24);
  }
  *param_3 = 0x7fffffff;
  return 0x13;
}


/* END FUNCTION 0x004015f0 */

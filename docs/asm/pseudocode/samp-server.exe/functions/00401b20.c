/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401b20
 * Name: FUN_00401b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00401b20(undefined4 param_1,byte *param_2,int *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (*param_3 != 0) {
    while ((iVar5 < param_4 || (param_4 == -1))) {
      pbVar4 = (byte *)param_3[iVar5 * 2];
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00401b74:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00401b79;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00401b74;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00401b79:
      if (iVar3 == 0) {
        return param_3[iVar5 * 2 + 1];
      }
      iVar3 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      if (param_3[iVar3 + 2] == 0) {
        return 0;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00401b20 */

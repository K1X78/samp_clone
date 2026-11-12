/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c870
 * Name: FUN_1009c870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1009c870(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_28 [40];
  
  iVar7 = 0;
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return 0xffff;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((char *)0x24 < pcVar3 + (int)(pcVar4 + (-(int)(param_2 + 1) - (int)(param_1 + 1)))) {
    return 0xffff;
  }
  _sprintf((char *)local_28,"%s:%s",param_1,param_2);
  FUN_10017440(local_28);
  pcVar3 = s_AIRPORT_THRW_BARL_THRW_101419d0;
  do {
    pbVar5 = local_28;
    pbVar8 = (byte *)pcVar3;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_1009c918:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1009c91d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_1009c918;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_1009c91d:
    if (iVar6 == 0) {
      return iVar7 + 1;
    }
    pcVar3 = pcVar3 + 0x24;
    iVar7 = iVar7 + 1;
    if (pcVar3 == &DAT_101518a0) {
      return 0xffff;
    }
  } while( true );
}


/* END FUNCTION 0x1009c870 */

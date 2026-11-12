/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040010
 * Name: FUN_10040010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10040010(int param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (((param_2 == (char *)0x0) || (*(char *)(param_1 + 4) != '\0')) ||
     (*(int *)(param_1 + 0xc0a) == -1)) {
    return (uint)param_2 & 0xffffff00;
  }
  if (0xff < param_5) {
    param_5 = 0xff;
  }
  if (param_4 == 0) {
    param_5 = 0;
  }
  if ((*param_2 < '0') || ('2' < *param_2)) {
    param_2 = (char *)FUN_10053480(param_2);
    if (param_2 == (char *)0x0) {
      return 0;
    }
  }
  bVar5 = true;
  iVar2 = 10;
  pcVar3 = param_2;
  pcVar4 = "127.0.0.1";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    bVar5 = true;
    iVar2 = 8;
    pcVar3 = param_2;
    pcVar4 = "0.0.0.0";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_100400bc;
  }
  if ((short)param_3 == *(short *)(param_1 + 0x231)) {
    return (uint)param_2 & 0xffffff00;
  }
LAB_100400bc:
  uVar1 = FUN_1003e160(param_2,param_3,param_4,param_5);
  return uVar1;
}


/* END FUNCTION 0x10040010 */

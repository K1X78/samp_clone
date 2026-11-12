/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000de60
 * Name: FUN_1000de60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1000de60(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_100c8b20();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x10d) = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  FUN_100cbf70(iVar3,0x2712,param_1 + 0xc);
  FUN_100cbf70(iVar3,0x2776,&DAT_10117a39);
  FUN_100cbf70(iVar3,0x2722,"SAMP/0.3");
  FUN_100cbf70(iVar3,0x2b,1);
  FUN_100cbf70(iVar3,0x4e2b,&LAB_1000bcd0);
  iVar1 = param_1 + 0x112;
  FUN_100cbf70(iVar3,0x2711,iVar1);
  FUN_100cbf70(iVar3,0x2d,1);
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 != param_2 + 1) {
      FUN_100cbf70(iVar3,0x2714,param_2);
    }
  }
  iVar5 = FUN_100c8d70(iVar3);
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 0x10d) = 1;
    *(int *)(param_1 + 0x10e) = iVar5;
  }
  FUN_100c8d90(iVar3);
  if (*(char *)(param_1 + 0x10d) != '\0') {
    uVar6 = FUN_100c7960(iVar5);
    FUN_1000c760(iVar1,*(undefined4 *)(param_1 + 0x10e),uVar6);
    return 1;
  }
  FUN_1000dbd0(iVar1);
  return 1;
}


/* END FUNCTION 0x1000de60 */

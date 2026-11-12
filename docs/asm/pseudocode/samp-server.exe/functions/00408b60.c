/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408b60
 * Name: FUN_00408b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00408b60(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  pcVar5 = param_1;
  cVar2 = *param_1;
  iVar7 = 0;
  param_1 = (char *)0x0;
  if (cVar2 == '-') {
    param_1 = (char *)0x1;
  }
  else if (cVar2 != '+') goto LAB_00408b8b;
  pcVar5 = pcVar5 + 1;
LAB_00408b8b:
  cVar2 = *pcVar5;
  while (lVar8 = 0, cVar2 == '0') {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  do {
    iVar6 = pcVar5[iVar7] + -0x30;
    if ((iVar6 < 0) || (9 < iVar6)) break;
    lVar8 = __allmul((uint)lVar8,(int)((ulonglong)lVar8 >> 0x20),10,0);
    lVar8 = lVar8 + iVar6;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
  pcVar5 = (char *)lVar8;
  if (iVar7 < 0xb) {
    uVar3 = (uint)(pcVar5 < param_1);
    if (((int)(uVar4 - uVar3) < 0) ||
       ((uVar4 == uVar3 || SBORROW4(uVar4,uVar3) &&
        ((uint)((int)pcVar5 - (int)param_1) < 0x80000000)))) {
      if (param_1 != (char *)0x0) {
        pcVar5 = (char *)-(int)pcVar5;
      }
      *param_2 = (uint)pcVar5;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00408b60 */

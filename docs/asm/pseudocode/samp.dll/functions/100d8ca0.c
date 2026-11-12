/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8ca0
 * Name: FUN_100d8ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d8ca0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = param_2;
  iVar2 = *param_2;
  pcVar4 = (char *)FUN_100cd2b0(param_3,&stack0x00000010);
  if (pcVar4 == (char *)0x0) {
    return 0x1b;
  }
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = (int)pcVar5 - (int)(pcVar4 + 1);
  pcVar5 = pcVar4;
  do {
    param_2 = (int *)0x0;
    iVar7 = (*(code *)piVar3[(param_1 == piVar3[0x67]) + 0x6e])
                      (piVar3,(uint)(param_1 == piVar3[0x67]),pcVar5,iVar6,&param_2);
    if (iVar7 < 0) {
      if (param_2 == (int *)0x0) {
        param_2 = (int *)0x37;
LAB_100d8d69:
        (*(code *)PTR__free_101554bc)(pcVar4);
        return (int)param_2;
      }
      if (param_2 != (int *)0x51) goto LAB_100d8d69;
      iVar7 = 0;
    }
    param_2 = (int *)0x0;
    if (*(int *)(iVar2 + 0x548) != 0) {
      FUN_100d89b0(iVar2,4,pcVar5,iVar7,piVar3);
    }
    if (iVar7 == iVar6) goto LAB_100d8d69;
    iVar6 = iVar6 - iVar7;
    pcVar5 = pcVar5 + iVar7;
  } while( true );
}


/* END FUNCTION 0x100d8ca0 */

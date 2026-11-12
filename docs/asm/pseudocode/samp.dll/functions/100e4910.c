/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4910
 * Name: FUN_100e4910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_100e4910(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int local_8 [2];
  
  uVar2 = *in_EAX;
  local_8[1] = 0;
  local_8[0] = 0;
  if (param_1 == 0) {
    uVar8 = in_EAX[0x5c];
    piVar9 = in_EAX + 0xd0;
    uVar3 = in_EAX[0x5d];
  }
  else {
    uVar8 = in_EAX[0x3d];
    piVar9 = in_EAX + 0xcd;
    uVar3 = in_EAX[0x3e];
  }
  pcVar4 = (char *)FUN_100cd220("%s:%s",uVar8,uVar3);
  if (pcVar4 == (char *)0x0) {
    return 0x1b;
  }
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = FUN_100e3f20(uVar2,pcVar4,(int)pcVar5 - (int)(pcVar4 + 1),local_8,local_8 + 1);
  if (iVar6 == 0) {
    if (local_8[0] == 0) {
      (*(code *)PTR__free_101554bc)(pcVar4);
      return 9;
    }
    (*(code *)PTR__free_101554bc)(*piVar9);
    pcVar5 = "Proxy-";
    if (param_1 == 0) {
      pcVar5 = "";
    }
    iVar7 = FUN_100cd220("%sAuthorization: Basic %s\r\n",pcVar5,local_8[0]);
    *piVar9 = iVar7;
    (*(code *)PTR__free_101554bc)(local_8[0]);
    if (*piVar9 == 0) {
      iVar6 = 0x1b;
    }
  }
  (*(code *)PTR__free_101554bc)(pcVar4);
  return iVar6;
}


/* END FUNCTION 0x100e4910 */

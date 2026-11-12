/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f3c50
 * Name: FUN_100f3c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100f3c50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_4;
  
  iVar2 = param_2;
  iVar1 = *param_1;
  iVar5 = iVar1 + 0x491c;
  if (param_2 == 0) {
    iVar5 = iVar1 + 0x48dc;
  }
  param_2 = 0;
  local_4 = 0;
  uVar3 = FUN_100f4de0(iVar1,iVar5,&param_2,&local_4);
  if (uVar3 == 0) {
    pcVar4 = "Proxy-";
    if (iVar2 == 0) {
      pcVar4 = "";
    }
    iVar5 = FUN_100cd220("%sAuthorization: Negotiate %s\r\n",pcVar4,param_2);
    if (iVar2 == 0) {
      (*(code *)PTR__free_101554bc)(param_1[0xd0]);
      param_1[0xd0] = iVar5;
    }
    else {
      (*(code *)PTR__free_101554bc)(param_1[0xcd]);
      param_1[0xcd] = iVar5;
    }
    (*(code *)PTR__free_101554bc)(param_2);
    uVar3 = (iVar5 != 0) - 1 & 0x1b;
  }
  return uVar3;
}


/* END FUNCTION 0x100f3c50 */

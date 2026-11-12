/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053e80
 * Name: FUN_10053e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10053e80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  cVar2 = FUN_10053760(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_10053900(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(iVar3 + 4) = *param_3;
    return;
  }
  uVar4 = FUN_10053870(puVar1,&param_2);
  if ((char)param_2 != '\0') {
    FUN_10053740(puVar1,uVar4);
    iVar3 = FUN_10053900(uVar4);
    *(undefined4 *)(iVar3 + 4) = *param_3;
    return;
  }
  local_8 = *puVar1;
  local_4 = *param_3;
  uVar4 = FUN_10053c00(puVar1,&local_8);
  FUN_10053740(puVar1,uVar4);
  return;
}


/* END FUNCTION 0x10053e80 */

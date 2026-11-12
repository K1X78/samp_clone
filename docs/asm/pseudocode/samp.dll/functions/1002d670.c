/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d670
 * Name: FUN_1002d670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002d670(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 local_6;
  undefined4 local_4;
  
  puVar1 = param_2;
  cVar2 = FUN_1002c7d0(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_1002cfd0(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(iVar3 + 2) = *param_3;
    return;
  }
  uVar4 = FUN_1002cf30(puVar1,&param_2);
  if ((char)param_2 != '\0') {
    FUN_1002c7b0(puVar1,uVar4);
    iVar3 = FUN_1002cfd0(uVar4);
    *(undefined4 *)(iVar3 + 2) = *param_3;
    return;
  }
  local_6 = *puVar1;
  local_4 = *param_3;
  uVar4 = FUN_1002d310(puVar1,&local_6);
  FUN_1002c7b0(puVar1,uVar4);
  return;
}


/* END FUNCTION 0x1002d670 */

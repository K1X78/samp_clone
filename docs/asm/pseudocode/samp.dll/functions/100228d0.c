/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100228d0
 * Name: FUN_100228d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100228d0(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = param_2;
  cVar2 = FUN_10020c60(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_10021960(*(undefined4 *)(param_1 + 0xc));
    *(undefined2 *)(iVar3 + 7) = *param_3;
    return;
  }
  uVar4 = FUN_100218c0(puVar1,&param_2);
  if ((char)param_2 != '\0') {
    FUN_10020c30(puVar1,uVar4);
    iVar3 = FUN_10021960(uVar4);
    *(undefined2 *)(iVar3 + 7) = *param_3;
    return;
  }
  uVar4 = FUN_10020b90(*puVar1,*(undefined3 *)(puVar1 + 1),*param_3);
  uVar4 = FUN_100225d0(puVar1,uVar4);
  FUN_10020c30(puVar1,uVar4);
  return;
}


/* END FUNCTION 0x100228d0 */

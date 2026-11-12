/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c170
 * Name: FUN_1008c170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1008c170(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char acStack_104 [260];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  piVar3 = *(int **)(iVar2 + 0x104);
  puVar1 = (undefined4 *)(iVar2 + 0x104);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *puVar1 = 0;
  }
  D3DXCreateFontA(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar2 + 0x108),0,
                  *(undefined4 *)(iVar2 + 0x10c),1,0,1,0,0,0,iVar2,puVar1);
  puVar4 = operator_new(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_1011c438;
  }
  puVar4[1] = *puVar1;
  *puVar1 = puVar4;
  _sprintf(acStack_104,"CDXUTDialogResourceManager::CreateFont(pFont=0x%X,pD3DDevice=0x%X)",puVar4,
           *(undefined4 *)(param_1 + 0x20));
  return 0;
}


/* END FUNCTION 0x1008c170 */

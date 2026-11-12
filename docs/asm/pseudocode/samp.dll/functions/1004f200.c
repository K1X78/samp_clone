/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f200
 * Name: FUN_1004f200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004f200(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  
  FUN_10020540();
  iVar5 = *param_1;
  puVar7 = (undefined2 *)(iVar5 + param_2 * 9);
  uVar3 = *puVar7;
  uVar6 = *(undefined4 *)(puVar7 + 1);
  uVar4 = puVar7[3];
  uVar2 = *(undefined1 *)(puVar7 + 4);
  param_3 = param_3 * 9;
  *puVar7 = *(undefined2 *)(param_3 + iVar5);
  puVar1 = (undefined4 *)(param_3 + 2 + iVar5);
  *(undefined4 *)(puVar7 + 1) = *puVar1;
  puVar7[3] = *(undefined2 *)(puVar1 + 1);
  *(undefined1 *)(puVar7 + 4) = *(undefined1 *)((int)puVar1 + 6);
  puVar7 = (undefined2 *)(*param_1 + param_3);
  *puVar7 = uVar3;
  *(undefined4 *)(puVar7 + 1) = uVar6;
  puVar7[3] = uVar4;
  *(undefined1 *)(puVar7 + 4) = uVar2;
  FUN_10020550();
  return;
}


/* END FUNCTION 0x1004f200 */

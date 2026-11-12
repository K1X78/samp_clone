/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055bf0
 * Name: FUN_10055bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10055bf0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined2 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(char *)(param_1 + 1) != '\0') && (*(int *)(param_1 + 0xb) != 0)) &&
     (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_10055480();
    *(uint *)(iVar1 + 8) = param_3;
    puVar2 = operator_new(param_3);
    uVar4 = *(uint *)(iVar1 + 8);
    *(undefined4 **)(iVar1 + 0x10) = puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(undefined4 *)(iVar1 + 2) = param_4;
    *(undefined2 *)(iVar1 + 6) = param_5;
    FUN_100554c0();
  }
  return;
}


/* END FUNCTION 0x10055bf0 */

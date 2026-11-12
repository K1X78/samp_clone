/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100326e0
 * Name: FUN_100326e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100326e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_100326c0(*param_2);
  puVar1 = (undefined4 *)*piVar4;
  piVar4 = (int *)FUN_100326c0(*puVar1);
  iVar2 = *piVar4;
  uVar3 = param_2[2];
  if (iVar2 == 0) {
    *(undefined4 **)(param_1 + 4) = param_2;
    puVar1[1] = uVar3;
    param_2[2] = puVar1;
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 **)(iVar2 + 4) = param_2;
    puVar1[1] = uVar3;
    param_2[2] = puVar1;
    return;
  }
  *(undefined4 **)(iVar2 + 8) = param_2;
  puVar1[1] = uVar3;
  param_2[2] = puVar1;
  return;
}


/* END FUNCTION 0x100326e0 */

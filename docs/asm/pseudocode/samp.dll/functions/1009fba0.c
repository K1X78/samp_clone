/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fba0
 * Name: FUN_1009fba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009fba0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 auStack_8c [14];
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    puStack_50 = local_40;
    uStack_54 = 0x1009fbbf;
    fVar4 = (float10)FUN_1009e950();
    iVar1 = *(int *)(param_1 + 0x40);
    local_10 = (float)(fVar4 * (float10)*(float *)(iVar1 + 0x44) + (float10)local_10);
    local_c = (float)(fVar4 * (float10)*(float *)(iVar1 + 0x48) + (float10)local_c);
    local_8 = (float)(fVar4 * (float10)*(float *)(iVar1 + 0x4c) + (float10)local_8);
    puVar2 = local_40;
    puVar3 = auStack_8c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009fb40();
  }
  return;
}


/* END FUNCTION 0x1009fba0 */

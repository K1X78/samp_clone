/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fb40
 * Name: FUN_1009fb40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009fb40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_58 [15];
  undefined4 uStack_1c;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (piVar1[5] != 0)) {
    iVar2 = *piVar1;
    uStack_1c = 0x1009fb6c;
    (**(code **)(iVar2 + 0xc))();
    puVar4 = auStack_58;
    for (iVar3 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *(undefined4 *)register0x00000010;
      puVar4 = puVar4 + 1;
    }
    FUN_1009ea00();
    uStack_1c = 0x1009fb89;
    FUN_1009eac0();
    uStack_1c = 0x1009fb92;
    (**(code **)(iVar2 + 8))();
  }
  return;
}


/* END FUNCTION 0x1009fb40 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d0f0
 * Name: FUN_1006d0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006d0f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1 + 1;
  if (param_1[1] == 0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1);
    }
    if (*piVar2 == 0) {
      (**(code **)(*(int *)*param_1 + 0xec))((int *)*param_1,1,piVar2);
      if (*piVar2 == 0) goto LAB_1006d12b;
    }
  }
  (**(code **)(*(int *)*piVar2 + 0x10))((int *)*piVar2);
LAB_1006d12b:
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
  }
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0x1b,1);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0x13,5);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0x14,6);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0xf,0);
  (**(code **)(*(int *)*param_1 + 0x10c))((int *)*param_1,0,1,3);
  (**(code **)(*(int *)*param_1 + 0x10c))((int *)*param_1,0,3,0);
  (**(code **)(*(int *)*param_1 + 0x10c))((int *)*param_1,0,4,2);
  (**(code **)(*(int *)*param_1 + 0x10c))((int *)*param_1,0,5,0);
  (**(code **)(*(int *)*param_1 + 0x170))((int *)*param_1,0);
  (**(code **)(*(int *)*param_1 + 0x1ac))((int *)*param_1,0);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,7,0);
  return;
}


/* END FUNCTION 0x1006d0f0 */

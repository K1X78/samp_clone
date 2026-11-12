/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5cb0
 * Name: FUN_100d5cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d5cb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  
  piVar1 = (int *)*unaff_EBX;
  iVar3 = *piVar1;
  if (*(code **)(piVar1[200] + 8) == (code *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(piVar1[200] + 8))(piVar1,param_1);
  if (iVar2 == 0x37) {
    if (piVar1[0xa2] == 0) {
      return 0x37;
    }
    if (*(int *)(iVar3 + 100) != 0) {
      return 0x37;
    }
    iVar3 = FUN_100d5be0();
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar2 = (**(code **)(*(int *)(*unaff_EBX + 800) + 8))(*unaff_EBX,param_1);
  }
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_100d5c70();
  }
  return iVar2;
}


/* END FUNCTION 0x100d5cb0 */

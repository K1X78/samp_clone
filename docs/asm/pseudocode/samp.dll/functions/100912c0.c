/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100912c0
 * Name: FUN_100912c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100912c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    return 0x80004005;
  }
  piVar1 = *(int **)(param_1 + 0x204);
  iVar4 = *piVar1;
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_1 + 0x208);
  uVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,uVar2);
  iVar4 = (**(code **)(iVar4 + 0x2c))(*(undefined4 *)(param_1 + 0x204),uVar3 & 0xfffffeef | 0x220);
  return (-1 < iVar4) - 1 & 0x80004005;
}


/* END FUNCTION 0x100912c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10024750
 * Name: FUN_10024750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10024750(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar6;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  (**(code **)(*piVar5 + 8))(piVar5,param_2,param_3,"INSTALLED PARSERS:\r\n");
  uVar3 = 0;
  if (param_1[2] != 0) {
    do {
      uVar6 = (undefined2)((uint)piVar5 >> 0x10);
      iVar1 = uVar3 * 4;
      iVar2 = *(int *)*param_1;
      uVar3 = uVar3 + 1;
      uVar4 = (**(code **)(**(int **)(param_1[1] + iVar1) + 4))();
      piVar5 = (int *)CONCAT22(uVar6,param_3);
      (**(code **)(iVar2 + 8))(*param_1,param_2,piVar5,"%i. %s\r\n",uVar3,uVar4);
    } while (uVar3 < (uint)param_1[2]);
  }
  return;
}


/* END FUNCTION 0x10024750 */

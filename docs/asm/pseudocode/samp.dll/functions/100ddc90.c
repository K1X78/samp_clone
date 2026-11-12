/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ddc90
 * Name: FUN_100ddc90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ddc90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [6];
  uint uStack_2a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x20) = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 != 0) {
    iVar1 = __stati64(param_2,local_30);
    if ((iVar1 != 0) || (iVar1 = FUN_101125ba(param_2,4), iVar1 != 0)) {
      iVar3 = 0x1a;
    }
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_2);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      iVar3 = 0x1b;
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    if ((iVar3 == 0) && ((uStack_2a & 0xf000) == 0x8000)) {
      *(undefined4 *)(param_1 + 0x40) = uStack_18;
      *(undefined4 *)(param_1 + 0x44) = uStack_14;
      *(code **)(param_1 + 0x18) = FUN_100dd290;
    }
    *(code **)(param_1 + 0x14) = FUN_100dd250;
    *(code **)(param_1 + 0x1c) = FUN_100dd310;
    *(undefined4 *)(param_1 + 0xc) = 2;
    iVar1 = FUN_100dcb80();
    if (iVar1 != 0) {
      iVar2 = FUN_100ddb70(param_1,iVar1);
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      (*(code *)PTR__free_101554bc)(iVar1);
      return iVar3;
    }
    return 0x1b;
  }
  return 0;
}


/* END FUNCTION 0x100ddc90 */

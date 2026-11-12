/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ead00
 * Name: FUN_100ead00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ead00(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_1c0 [111];
  
  if ((param_1[0x3c] == 2) && (param_1[param_2 + 0xc1] == 0)) {
    iVar2 = FUN_100ce990(param_1,param_2,param_1 + param_2 + 0xc1);
    if (iVar2 != 0) {
      param_1[0xa1] = 1;
      return iVar2;
    }
    if (param_1[param_2 + 0xc1] == 0) {
      return 0;
    }
  }
  if (param_1[0xb1] == 0) {
    return 0;
  }
  if (param_1[0xa6] == 0) {
    return 0;
  }
  iVar2 = *param_1;
  uVar1 = *(undefined4 *)(iVar2 + 0x140);
  puVar5 = local_1c0;
  for (iVar4 = 0x6e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 **)(iVar2 + 0x140) = local_1c0;
  FUN_100dc080(param_1,0);
  if (param_1[0xa3] == 0) {
    if (param_2 == 1) {
      iVar2 = param_1[0x2a];
      uVar3 = (uint)*(ushort *)(param_1 + 0x42);
      goto LAB_100eadf4;
    }
    iVar2 = param_1[0x28];
  }
  else {
    iVar2 = param_1[0x2d];
  }
  if (param_2 == 1) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x42);
  }
  else if (param_1[0xa4] == 0) {
    uVar3 = param_1[0x40];
  }
  else {
    uVar3 = param_1[0x41];
  }
LAB_100eadf4:
  iVar2 = FUN_100eac80(param_1,param_2,iVar2,uVar3);
  *(undefined4 *)(*param_1 + 0x140) = uVar1;
  if (iVar2 == 0) {
    (*(code *)PTR__free_101554bc)(param_1[0xcd]);
    param_1[0xcd] = 0;
    return 0;
  }
  return iVar2;
}


/* END FUNCTION 0x100ead00 */

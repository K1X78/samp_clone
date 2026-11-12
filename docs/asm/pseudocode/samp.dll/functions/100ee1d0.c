/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee1d0
 * Name: FUN_100ee1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ee1d0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  *param_2 = 0;
  if (((((*(int *)(iVar1 + 0x540) == 0) || ((*(uint *)(param_1[200] + 0x40) & 0x40003) != 0)) &&
       (uVar2 = *(uint *)(iVar1 + 0xa0),
       uVar2 + *(uint *)(iVar1 + 0x90) == 0 &&
       ((int)uVar2 >> 0x1f) + *(int *)(iVar1 + 0x94) + (uint)CARRY4(uVar2,*(uint *)(iVar1 + 0x90))
       == 0)) && (param_1[0xa2] != 0)) &&
     (((*(int *)(iVar1 + 0x53c) == 0 || ((*(byte *)(param_1[200] + 0x40) & 3) != 0)) &&
      (*(int *)(iVar1 + 0x6a0) != 0xb)))) {
    FUN_100d8ae0(*param_1,"Connection died, retrying a fresh connect\n");
    iVar3 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(*param_1 + 0x700));
    *param_2 = iVar3;
    if (iVar3 == 0) {
      return 0x1b;
    }
    FUN_100dc080(param_1,1);
    param_1[0xb0] = 1;
    if (((*(byte *)(param_1[200] + 0x40) & 3) != 0) &&
       (*(int *)(*(int *)(iVar1 + 0x140) + 0x28) != 0 ||
        *(int *)(*(int *)(iVar1 + 0x140) + 0x2c) != 0)) {
      uVar4 = FUN_100ec7a0(param_1);
      return uVar4;
    }
  }
  return 0;
}


/* END FUNCTION 0x100ee1d0 */

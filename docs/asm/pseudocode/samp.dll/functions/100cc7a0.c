/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cc7a0
 * Name: FUN_100cc7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100cc7a0(byte param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 == 0) {
    iVar3 = (*(code *)PTR__malloc_101554b8)(0x20);
    *param_2 = iVar3;
    if (iVar3 == 0) goto LAB_100cc7ee;
    param_2[2] = 0x20;
    param_2[1] = 0;
  }
  else {
    uVar1 = param_2[2];
    if (uVar1 <= param_2[1] + 1U) {
      uVar2 = uVar1 * 2;
      if (uVar1 < uVar2) {
        iVar3 = (*(code *)PTR__realloc_101554c0)(*param_2,uVar2);
        if (iVar3 != 0) {
          *param_2 = iVar3;
          param_2[2] = uVar2;
          goto LAB_100cc800;
        }
      }
LAB_100cc7ee:
      param_2[3] = 1;
      return 0xffffffff;
    }
  }
LAB_100cc800:
  *(byte *)(*param_2 + param_2[1]) = param_1;
  param_2[1] = param_2[1] + 1;
  return (uint)param_1;
}


/* END FUNCTION 0x100cc7a0 */

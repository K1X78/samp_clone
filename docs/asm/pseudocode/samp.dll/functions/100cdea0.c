/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cdea0
 * Name: FUN_100cdea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall
FUN_100cdea0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + 0xc);
  puVar2 = puVar3;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_2 + 0x44) = param_2;
  *(undefined4 *)(param_2 + 0x18) = param_4;
  *(undefined4 *)(param_2 + 0x10) = 1;
  puVar2 = (undefined4 *)(param_2 + 0x24);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(code *)PTR__malloc_101554b8)(0x18);
  *puVar3 = lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(lpCriticalSection);
    *(undefined4 *)(param_2 + 0x1c) = 0;
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_3);
    *(int *)(param_2 + 0x14) = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
    if ((LPCRITICAL_SECTION)*puVar3 != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar3);
      (*(code *)PTR__free_101554bc)(*puVar3);
    }
  }
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x14));
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_100e07d0(*(int *)(param_2 + 0x20));
  }
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


/* END FUNCTION 0x100cdea0 */

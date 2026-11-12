/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9557
 * Name: __cinit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (PTR___fpmath_10155590 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_10155590)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_1013c024;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_1013c03c);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_101032e7);
    puVar2 = &DAT_1013c000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_1013c020);
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100f9557 */

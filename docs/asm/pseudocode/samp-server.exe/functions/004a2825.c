/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a2825
 * Name: __cinit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (PTR___fpmath_004ec0a8 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_004ec0a8)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_004ca024;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004ca03c);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_004ab955);
    puVar2 = &DAT_004ca000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_004ca020);
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x004a2825 */

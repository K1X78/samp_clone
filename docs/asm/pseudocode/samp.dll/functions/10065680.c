/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065680
 * Name: FUN_10065680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10065680(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)(param_1 + 0x7a00);
  puVar3 = (undefined4 *)(param_1 + 0x39);
  iVar1 = 0x200;
  do {
    if ((*piVar2 != 0) && ((void *)*puVar3 != (void *)0x0)) {
      _free((void *)*puVar3);
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 0x3d);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x10065680 */

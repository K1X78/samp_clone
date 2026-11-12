/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466bb0
 * Name: FUN_00466bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00466bb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x4000);
  iVar1 = 0x800;
  do {
    if ((void *)puVar2[-0x800] != (void *)0x0) {
      _free((void *)puVar2[-0x800]);
      puVar2[-0x800] = 0;
    }
    if ((void *)*puVar2 != (void *)0x0) {
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x00466bb0 */

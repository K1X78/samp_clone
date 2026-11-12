/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452240
 * Name: FUN_00452240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00452240(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3c4);
  iVar2 = FUN_00450ae0(piVar1);
  while (iVar2 != 0) {
    if (*(void **)(iVar2 + 0x10) != (void *)0x0) {
      _free(*(void **)(iVar2 + 0x10));
    }
    FUN_00450b00((int)piVar1);
    iVar2 = FUN_00450ae0(piVar1);
  }
  FUN_00450b20(piVar1);
  return;
}


/* END FUNCTION 0x00452240 */

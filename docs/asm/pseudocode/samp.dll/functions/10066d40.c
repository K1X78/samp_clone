/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066d40
 * Name: FUN_10066d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066d40(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1[2] != 0) && (*(int *)((int)param_1 + 0x11e) != 0)) {
    iVar2 = FUN_100a0760();
    if (iVar2 == 0) {
      cVar1 = FUN_10069250();
      if (cVar1 == '\0') {
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x11e) + 0x8e) - *param_1;
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        FUN_10066b50(iVar2);
      }
    }
  }
  return;
}


/* END FUNCTION 0x10066d40 */

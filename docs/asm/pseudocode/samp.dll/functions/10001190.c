/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001190
 * Name: FUN_10001190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10001190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x3a00;
  iVar2 = 0x800;
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0x1d);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x10001190 */

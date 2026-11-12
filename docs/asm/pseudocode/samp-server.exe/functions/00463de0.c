/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463de0
 * Name: FUN_00463de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00463de0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x400;
  iVar2 = 0x400;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *param_1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0x21);
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x00463de0 */

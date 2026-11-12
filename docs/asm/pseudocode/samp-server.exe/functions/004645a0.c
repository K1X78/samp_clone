/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004645a0
 * Name: FUN_004645a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004645a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 8000);
  iVar2 = 1000;
  do {
    puVar1[-1000] = 0;
    *puVar1 = 0;
    puVar1[-2000] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 12000) = 0;
  return;
}


/* END FUNCTION 0x004645a0 */

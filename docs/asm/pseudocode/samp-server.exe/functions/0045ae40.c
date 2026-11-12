/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045ae40
 * Name: FUN_0045ae40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0045ae40(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = param_1 | 1;
  DAT_004cac5c = 0;
  puVar2 = &DAT_004ed7d4;
  iVar3 = 0x26f;
  DAT_004ed7d0 = uVar1;
  do {
    uVar1 = uVar1 * 0x10dcd;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* END FUNCTION 0x0045ae40 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451470
 * Name: FUN_00451470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00451470(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar2 * 4);
    uVar4 = uVar1 * 2 | uVar3;
    uVar3 = uVar1 >> 0x1f;
    *(uint *)(param_1 + uVar2 * 4) = uVar4;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}


/* END FUNCTION 0x00451470 */

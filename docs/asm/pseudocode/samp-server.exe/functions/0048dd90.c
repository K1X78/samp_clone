/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048dd90
 * Name: FUN_0048dd90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048dd90(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x323c8);
  do {
    iVar1 = FUN_0048c1e0((void *)0x4,param_1 + 0x32a4c,param_1 + 0x30d34);
    *piVar3 = iVar1;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x10);
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


/* END FUNCTION 0x0048dd90 */

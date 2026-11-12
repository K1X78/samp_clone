/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c230
 * Name: FUN_0048c230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0048c230(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)param_2 + 2) = 0x400;
  *(undefined2 *)param_2 = 0x400;
  puVar2 = param_2;
  for (iVar1 = 0x40; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x4000400;
  }
  puVar2 = param_2 + 0x41;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x4000400;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2 + 0x81;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x4000400;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x0048c230 */

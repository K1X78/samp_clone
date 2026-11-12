/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a0a0
 * Name: FUN_0040a0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  iVar2 = *piVar1;
  *(int *)(param_1 + 0x1c) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x20) = param_1;
  }
  *piVar1 = param_1;
  if (piVar1[1] == 0) {
    piVar1[1] = param_1;
  }
  if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 0x14) & 4) == 0)) {
    piVar1[2] = param_1;
  }
  return;
}


/* END FUNCTION 0x0040a0a0 */

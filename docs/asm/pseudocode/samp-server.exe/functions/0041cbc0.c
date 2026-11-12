/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cbc0
 * Name: FUN_0041cbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041cbc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = *(int **)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      if (*(undefined4 **)(*piVar3 + 0x10) == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined4 **)(*piVar3 + 0x10);
      }
      FUN_004197c0(uVar1,piVar3[2],0x75,(char *)piVar3[1],-5);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}


/* END FUNCTION 0x0041cbc0 */

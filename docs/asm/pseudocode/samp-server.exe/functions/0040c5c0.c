/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c5c0
 * Name: FUN_0040c5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c5c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar4 = (int *)(iVar1 + 0x44);
  iVar2 = *(int *)(iVar1 + 0x44);
  while (iVar2 != 0) {
    piVar3 = (int *)*piVar4;
    if (*piVar3 == param_1) {
      *piVar4 = piVar3[3];
      if (piVar3[1] != 1) {
        FUN_004080d0((int)piVar3);
      }
    }
    else {
      piVar4 = piVar3 + 3;
    }
    iVar2 = *piVar4;
  }
  if (*(int *)(iVar1 + 0x48) != param_1) {
    if (*(int *)(iVar1 + 0x24) == 2) {
      *(undefined1 *)(iVar1 + 0x4d) = 0;
    }
    return;
  }
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined1 *)(iVar1 + 0x4c) = 0;
  *(undefined1 *)(iVar1 + 0x4d) = 0;
  return;
}


/* END FUNCTION 0x0040c5c0 */

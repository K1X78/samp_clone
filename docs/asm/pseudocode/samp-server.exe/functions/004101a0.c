/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004101a0
 * Name: FUN_004101a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004101a0(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(*in_EAX + 8) + 0x1c);
  iVar4 = 0;
  if (*(char *)((int)in_EAX + 0x1ba) != '\0') {
    return 0;
  }
  if ((iVar1 != *(int *)(param_1 + 0x44)) &&
     (piVar3 = *(int **)(iVar1 + 0x2c), piVar3 != (int *)0x0)) {
    do {
      iVar1 = piVar3[2];
      if ((*(int *)(iVar1 + 0x18) == *(int *)(param_1 + 0x44)) &&
         (iVar2 = FUN_00408450(*(byte **)(iVar1 + 4),*(byte **)(param_1 + 4)), iVar2 == 0)) {
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x40);
        }
        *(int *)(iVar1 + 0x20) = iVar4;
        iVar4 = iVar1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  return *(int *)(param_1 + 0x40);
}


/* END FUNCTION 0x004101a0 */

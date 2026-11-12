/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004300f0
 * Name: FUN_004300f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_004300f0(char *param_1)

{
  char cVar1;
  int *in_EAX;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    while (piVar4 = *(int **)(pcVar2 + 0x14), piVar4 == (int *)0x0) {
      cVar1 = *pcVar2;
      if ((*(int *)(pcVar2 + 0x28) != 0) &&
         ((((cVar1 == -0x66 || (cVar1 == -0x68)) || (cVar1 == -0x7c)) || (cVar1 == '<')))) {
        if (-1 < *(short *)(pcVar2 + 0x1c)) {
          piVar4 = FUN_0041b6e0(*in_EAX,0,*(byte *)(*(int *)(*(int *)(*in_EAX + 8) + 0xc) + 0x49));
          *(int **)(param_1 + 0x14) = piVar4;
        }
        break;
      }
      if (((cVar1 != '%') && (cVar1 != -99)) ||
         (pcVar2 = *(char **)(pcVar2 + 8), pcVar2 == (char *)0x0)) break;
    }
  }
  iVar3 = FUN_0042ef80();
  if (iVar3 == 0) {
    return piVar4;
  }
  return (int *)0x0;
}


/* END FUNCTION 0x004300f0 */

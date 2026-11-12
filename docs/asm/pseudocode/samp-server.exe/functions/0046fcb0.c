/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fcb0
 * Name: FUN_0046fcb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0046fcb0(int *param_1,int param_2,char *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int *)(*param_1 + 0x10) + *param_1 + param_2);
  piVar2 = piVar1;
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    if (*param_3 == '\0') break;
    *piVar2 = (int)*param_3;
    piVar2 = piVar2 + 1;
    param_3 = param_3 + 1;
  }
  *piVar2 = 0;
  return (int)piVar2 - (int)piVar1 >> 2;
}


/* END FUNCTION 0x0046fcb0 */

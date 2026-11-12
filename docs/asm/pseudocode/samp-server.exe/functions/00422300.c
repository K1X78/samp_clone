/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00422300
 * Name: FUN_00422300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00422300(int param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_2 == -0x68) && (*(int *)(param_2 + 0x18) == param_3)) {
    if (*(short *)(param_2 + 0x1c) < 0) {
      *param_2 = 'b';
      return param_2;
    }
    pcVar1 = (char *)FUN_00420310(param_1,*(undefined4 **)
                                           (*(int *)(param_4 + 0xc) +
                                           *(short *)(param_2 + 0x1c) * 0x14),0);
    if ((pcVar1 != (char *)0x0) && (*(int *)(param_2 + 0x14) != 0)) {
      *(int *)(pcVar1 + 0x14) = *(int *)(param_2 + 0x14);
    }
    FUN_004158d0(param_1,(int)param_2);
    return pcVar1;
  }
  pcVar1 = FUN_00422300(param_1,*(char **)(param_2 + 8),param_3,param_4);
  *(char **)(param_2 + 8) = pcVar1;
  pcVar1 = FUN_00422300(param_1,*(char **)(param_2 + 0xc),param_3,param_4);
  *(char **)(param_2 + 0xc) = pcVar1;
  if ((param_2[3] & 8U) != 0) {
    FUN_0040ffe0(param_1,*(undefined4 **)(param_2 + 0x10),param_3,param_4);
    return param_2;
  }
  FUN_004223d0(param_1,*(int **)(param_2 + 0x10),param_3,param_4);
  return param_2;
}


/* END FUNCTION 0x00422300 */

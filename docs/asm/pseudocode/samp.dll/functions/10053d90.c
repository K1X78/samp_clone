/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053d90
 * Name: FUN_10053d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_10053d90(undefined1 *param_1,int param_2,int *param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_10053b40(&param_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_10053af0(&param_4);
  *param_1 = 0;
  cVar1 = FUN_1001f530(&param_4,0x10,1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*param_3 - param_3[2] < (int)(uint)param_4) {
    return 0;
  }
  iVar2 = FUN_10026230(param_3,(uint)param_4,param_2,param_1);
  if (iVar2 < param_2) {
    param_1[iVar2] = 0;
    return 1;
  }
  param_1[param_2 + -1] = 0;
  return 1;
}


/* END FUNCTION 0x10053d90 */

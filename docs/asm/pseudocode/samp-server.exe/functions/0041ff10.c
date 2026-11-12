/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ff10
 * Name: FUN_0041ff10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041ff10(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (param_1[0x33] < 0) {
      return 0;
    }
    if (0 < param_1[0x33]) goto LAB_0041ff45;
    iVar1 = param_1[0x32];
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x1e4);
    if (0 < iVar1) goto LAB_0041ff45;
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = *(int *)(*param_1 + 0x1e0);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_0041ff45:
  param_1[0x16] = 0x13;
  *(undefined1 *)(param_1 + 0xe) = 2;
  FUN_0041db50((undefined **)"foreign key constraint failed");
  return 1;
}


/* END FUNCTION 0x0041ff10 */

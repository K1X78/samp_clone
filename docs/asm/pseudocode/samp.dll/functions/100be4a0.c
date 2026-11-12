/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be4a0
 * Name: FUN_100be4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be4a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[0x16];
  puVar2 = (undefined4 *)param_1[9];
  if (iVar1 != 0) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  *param_1 = param_1[0xd];
  param_1[3] = param_1[6];
  param_1[1] = param_1[6];
  param_1[5] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_2 != 0) {
    FUN_100be040();
  }
  FUN_100be450();
  return;
}


/* END FUNCTION 0x100be4a0 */

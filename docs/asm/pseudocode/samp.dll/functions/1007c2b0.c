/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c2b0
 * Name: FUN_1007c2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1007c2b0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1007bb40(param_1[1] + 1);
  if (-1 < iVar1) {
    *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
    param_1[1] = param_1[1] + 1;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x1007c2b0 */

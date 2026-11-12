/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d550
 * Name: FUN_1000d550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1000d550(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = _calloc(1,0x5e);
  if ((-1 < (int)param_2[3]) && ((int)param_2[3] < 0x4e21)) {
    puVar3 = puVar1;
    for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)param_2;
    FUN_1000cff0(param_1,puVar1);
    return param_1;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1000d550 */

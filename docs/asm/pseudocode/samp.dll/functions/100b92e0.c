/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b92e0
 * Name: FUN_100b92e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b92e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  do {
    puVar1 = param_1 + 0x14;
    if (param_2 == (undefined4 *)0x0) {
      puVar4 = puVar1;
      puVar3 = param_1;
      for (iVar2 = 0x10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      D3DXMatrixMultiply(puVar1,param_1 + 1,param_2);
    }
    if (param_1[0x12] != 0) {
      FUN_100b92e0(param_1[0x12],param_2);
    }
    param_1 = (undefined4 *)param_1[0x13];
    param_2 = puVar1;
  } while (param_1 != (undefined4 *)0x0);
  return;
}


/* END FUNCTION 0x100b92e0 */

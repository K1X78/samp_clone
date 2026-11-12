/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a110
 * Name: FUN_0040a110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall
FUN_0040a110(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_2[5] = param_3;
  param_2[6] = param_4;
  param_2[7] = param_5;
  param_2[8] = param_6;
  param_2[9] = param_7;
  param_2[4] = 100;
  return;
}


/* END FUNCTION 0x0040a110 */

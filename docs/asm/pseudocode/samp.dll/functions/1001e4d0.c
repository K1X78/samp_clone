/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e4d0
 * Name: FUN_1001e4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1001e4d0(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_1 + 0x44d;
  iVar3 = 2000;
  do {
    puVar2[2000] = 0;
    *puVar2 = 0;
    puVar2[4000] = 0;
    DVar1 = GetTickCount();
    puVar2[9000] = DVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x3e9;
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[0x5e25] = 1;
  return param_1;
}


/* END FUNCTION 0x1001e4d0 */

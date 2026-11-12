/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004674f0
 * Name: FUN_004674f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_004674f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0xfd5;
  iVar2 = 2000;
  do {
    puVar1[-2000] = 0;
    *puVar1 = 0;
    puVar1[-4000] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x17a5] = 0;
  return param_1;
}


/* END FUNCTION 0x004674f0 */

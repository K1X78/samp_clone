/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465160
 * Name: FUN_00465160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00465160(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x80;
  puVar1 = param_1;
  do {
    puVar1[0x80] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x100;
  for (iVar2 = 0xfa; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* END FUNCTION 0x00465160 */

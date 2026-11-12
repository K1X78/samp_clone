/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008190
 * Name: FUN_10008190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10008190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x3c01;
  for (iVar2 = 0x5000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *param_1 = 0;
  puVar1 = param_1 + 0x2001;
  iVar2 = 0x1000;
  do {
    puVar1[-0x2000] = 0;
    *puVar1 = 0;
    puVar1[-0x1000] = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


/* END FUNCTION 0x10008190 */

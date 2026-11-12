/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a75f0
 * Name: FUN_100a75f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a75f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_101a0448;
  for (iVar1 = 0xffff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&DAT_00a9b0c8;
  puVar3 = (undefined4 *)PTR_DAT_10152ae0;
  for (iVar1 = 20000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_100a7560();
  FUN_100a6d30();
  return 1;
}


/* END FUNCTION 0x100a75f0 */

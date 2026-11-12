/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa5e0
 * Name: FUN_100aa5e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa5e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD local_4;
  
  puVar2 = &DAT_102075b4;
  do {
    puVar2[-1] = 0x85bdc0;
    puVar3 = puVar2 + 0x11;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = puVar3;
  } while (puVar3 != &DAT_1020ca70);
  VirtualProtect(&DAT_004c67ad,4,0x40,&local_4);
  _DAT_004c67ad = &DAT_102075b0;
  return;
}


/* END FUNCTION 0x100aa5e0 */

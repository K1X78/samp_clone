/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa980
 * Name: FUN_100aa980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa980(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD local_4;
  
  puVar2 = &DAT_101549a0;
  puVar3 = &DAT_102a8e70;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  VirtualProtect(&DAT_0044b1c1,4,0x40,&local_4);
  _DAT_0044b1c1 = &DAT_102a8e70;
  VirtualProtect(&DAT_004c8390,4,0x40,&local_4);
  _DAT_004c8390 = &DAT_102a8e70;
  VirtualProtect(&DAT_004c8399,4,0x40,&local_4);
  _DAT_004c8399 = 0x102a8e71;
  VirtualProtect(&DAT_004c83a3,4,0x40,&local_4);
  _DAT_004c83a3 = 0x102a8e72;
  VirtualProtect(&DAT_005817cc,4,0x40,&local_4);
  _DAT_005817cc = &DAT_102a8e70;
  VirtualProtect(&DAT_00582176,4,0x40,&local_4);
  _DAT_00582176 = &DAT_102a8e70;
  VirtualProtect(&DAT_006a6ffa,4,0x40,&local_4);
  _DAT_006a6ffa = &DAT_102a8e70;
  return;
}


/* END FUNCTION 0x100aa980 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa630
 * Name: FUN_100aa630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100aa630(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD local_4;
  
  puVar2 = &DAT_1020ca74;
  do {
    puVar2[-1] = 0x85bbf0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar1 = puVar2 + 8;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_102a8e74);
  puVar2 = &DAT_101546f8;
  do {
    VirtualProtect((LPVOID)*puVar2,4,0x40,&local_4);
    puVar1 = (undefined4 *)*puVar2;
    puVar2 = puVar2 + 1;
    *puVar1 = &DAT_1020ca70;
  } while (puVar2 != &DAT_10154730);
  return;
}


/* END FUNCTION 0x100aa630 */

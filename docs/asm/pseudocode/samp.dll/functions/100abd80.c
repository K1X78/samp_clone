/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abd80
 * Name: FUN_100abd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100abd80(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2a4);
  if ((((iVar2 != 0) &&
       (puVar1 = (uint *)((uint)*(byte *)(iVar2 + 0x718) * 0x1c + 0x5a0 + iVar2),
       puVar1 != (uint *)0x0)) && (0xf < *puVar1)) && ((*puVar1 != 0x2e && (puVar1[3] == 0)))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100abd80 */

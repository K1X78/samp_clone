/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413660
 * Name: FUN_00413660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00413660(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  puVar1 = FUN_004135e0();
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *unaff_ESI + (int)puVar1;
    if (unaff_ESI[1] != 0) {
      DAT_004ed2f8 = DAT_004ed2f8 + 1;
      return iVar2;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x00413660 */

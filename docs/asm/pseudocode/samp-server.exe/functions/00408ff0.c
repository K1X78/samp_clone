/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408ff0
 * Name: FUN_00408ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00408ff0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  
  puVar1 = (undefined4 *)unaff_EBX[2];
  unaff_EBX[2] = 0;
  FUN_004080d0(unaff_EBX[3]);
  unaff_EBX[3] = 0;
  *unaff_EBX = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_004080d0((int)puVar1);
    puVar1 = puVar2;
  }
  unaff_EBX[1] = 0;
  return;
}


/* END FUNCTION 0x00408ff0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414d70
 * Name: FUN_00414d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_00414d70(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_ESI;
  
  if (unaff_ESI[4] == 0) {
    iVar1 = 0x33;
  }
  else {
    iVar1 = unaff_ESI[4] * 2;
  }
  puVar2 = FUN_004129a0(*unaff_ESI,iVar1 * 0x14,*unaff_ESI,(undefined4 *)unaff_ESI[5]);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_004080b0(*unaff_ESI);
    unaff_ESI[4] = uVar3 / 0x14;
    unaff_ESI[5] = (int)puVar2;
  }
  return (puVar2 != (undefined4 *)0x0) - 1U & 7;
}


/* END FUNCTION 0x00414d70 */

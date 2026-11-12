/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414c50
 * Name: FUN_00414c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00414c50(void)

{
  byte bVar1;
  undefined3 extraout_var;
  void *this;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  undefined4 *puVar4;
  
  if ((*(byte *)((int)unaff_ESI + 0x1d) & 0x40) != 0) {
    this = (void *)(unaff_ESI[6] + *unaff_ESI);
    if ((int)this < 1) {
      this = (void *)0x1;
    }
    bVar1 = FUN_00414b80(this,(int)unaff_ESI);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 7;
    }
    uVar3 = *unaff_ESI;
    puVar4 = (undefined4 *)(unaff_ESI[5] + unaff_ESI[6]);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(byte *)((int)unaff_ESI + 0x1d) = *(byte *)((int)unaff_ESI + 0x1d) & 0xbd;
    unaff_ESI[6] = unaff_ESI[6] + *unaff_ESI;
  }
  return 0;
}


/* END FUNCTION 0x00414c50 */

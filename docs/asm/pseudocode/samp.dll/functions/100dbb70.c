/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbb70
 * Name: FUN_100dbb70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dbb70(void)

{
  u_short uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *unaff_EBX;
  short *unaff_ESI;
  undefined1 *unaff_EDI;
  
  if (*unaff_ESI == 2) {
    iVar2 = FUN_100e4690(2,unaff_ESI + 2);
    if (iVar2 != 0) {
      uVar1 = ntohs(unaff_ESI[1]);
      *unaff_EBX = (uint)uVar1;
      return 1;
    }
  }
  *unaff_EDI = 0;
  *unaff_EBX = 0;
  puVar3 = (undefined4 *)FUN_100fdc77();
  *puVar3 = 0x273f;
  return 0;
}


/* END FUNCTION 0x100dbb70 */

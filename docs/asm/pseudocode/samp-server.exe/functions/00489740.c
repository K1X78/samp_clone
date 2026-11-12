/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489740
 * Name: FUN_00489740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00489740(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x82);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if ((((iVar1 != 0x21a) && (iVar1 != 0x23a)) && (iVar1 != 0x219)) && (iVar1 != 0x239)) {
    return CONCAT31(uVar2,iVar1 == 0x1c1);
  }
  return CONCAT31(uVar2,1);
}


/* END FUNCTION 0x00489740 */

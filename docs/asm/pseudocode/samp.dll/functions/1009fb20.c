/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fb20
 * Name: FUN_1009fb20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1009fb20(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (iVar1 == _DAT_00b7cd68)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


/* END FUNCTION 0x1009fb20 */

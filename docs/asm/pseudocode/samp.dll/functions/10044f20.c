/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044f20
 * Name: FUN_10044f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10044f20(ushort *param_1)

{
  ushort uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10043cd0(0);
  uVar1 = *param_1;
  if (uVar1 < *(ushort *)(*piVar2 + 0x11)) {
    return 0xffffffff;
  }
  piVar2 = (int *)FUN_10043cd0(0);
  return (uint)(uVar1 != *(ushort *)(*piVar2 + 0x11));
}


/* END FUNCTION 0x10044f20 */

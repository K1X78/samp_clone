/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004127c0
 * Name: FUN_004127c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004127c0(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBX;
  
  if (unaff_EBX == 0) {
    iVar1 = FUN_004125b0(param_1);
    return iVar1;
  }
  if (param_1 < 1) {
    FUN_004080d0(unaff_EBX);
    return 0;
  }
  if (0x7ffffeff < param_1) {
    return 0;
  }
  iVar1 = FUN_004080a0();
  iVar2 = (*DAT_004ca150)(param_1);
  if (iVar1 == iVar2) {
    return unaff_EBX;
  }
  if (DAT_004ca128 == 0) {
    iVar1 = (*DAT_004ca148)();
    return iVar1;
  }
  FUN_00407e50(DAT_004ed530);
  FUN_004073d0(5);
  iVar1 = FUN_00407390();
  iVar2 = iVar1 + extraout_ECX >> 0x1f;
  if ((DAT_004ed53c <= iVar2) &&
     ((DAT_004ed53c < iVar2 || (DAT_004ed538 <= (uint)(iVar1 + extraout_ECX))))) {
    FUN_00408010(extraout_ECX);
  }
  iVar1 = (*DAT_004ca148)();
  if (iVar1 == 0) {
    if (DAT_004ed540 == 0) goto LAB_004128ad;
    FUN_00408010(param_1);
    iVar1 = (*DAT_004ca148)();
    if (iVar1 == 0) goto LAB_004128ad;
  }
  FUN_004080a0();
  FUN_004073a0(0);
LAB_004128ad:
  FUN_00407e90(DAT_004ed530);
  return iVar1;
}


/* END FUNCTION 0x004127c0 */

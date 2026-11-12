/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408ed0
 * Name: FUN_00408ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00408ed0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *unaff_ESI;
  uint local_8;
  int local_4;
  
  bVar1 = param_1[1];
  if (-1 < (char)bVar1) {
    uVar2 = (*param_1 & 0x7f) << 7;
    *unaff_ESI = uVar2 | bVar1;
    return CONCAT31((int3)(uVar2 >> 8),2);
  }
  if ((char)param_1[2] < '\0') {
    uVar3 = FUN_00408d50();
    if (local_4 != 0) {
      *unaff_ESI = 0xffffffff;
      return uVar3;
    }
    *unaff_ESI = local_8;
    return uVar3;
  }
  uVar2 = ((uint)*param_1 << 0xe | (uint)param_1[2]) & 0x1fc07f;
  *unaff_ESI = (bVar1 & 0x7f) << 7 | uVar2;
  return CONCAT31((int3)(uVar2 >> 8),3);
}


/* END FUNCTION 0x00408ed0 */

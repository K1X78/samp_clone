/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d8d0
 * Name: FUN_0040d8d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040d8d0(uint *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = (ushort)param_1[7];
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) != 0) {
      return 7;
    }
    uVar2 = param_1[6];
    if ((uVar1 & 0x4000) != 0) {
      uVar2 = uVar2 + *param_1;
    }
    return (uVar1 >> 1 & 1) + 0xc + uVar2 * 2;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (((3 < param_2) && ((uVar2 & 1) == uVar2)) && (uVar3 == 0)) {
    return uVar2 + 8;
  }
  if (((int)uVar3 < 1) && ((int)uVar3 < 0)) {
    bVar4 = uVar2 != 0;
    uVar2 = -uVar2;
    uVar3 = -(uVar3 + bVar4);
  }
  if (uVar3 == 0) {
    if (uVar2 < 0x80) {
      return 1;
    }
    if (uVar2 < 0x8000) {
      return 2;
    }
    if (uVar2 < 0x800000) {
      return 3;
    }
    if (uVar2 < 0x80000000) {
      return 4;
    }
  }
  if (uVar3 < 0x8000) {
    return 5;
  }
  return 6;
}


/* END FUNCTION 0x0040d8d0 */

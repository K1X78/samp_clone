/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409e90
 * Name: FUN_00409e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00409e90(uint *param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != (uint *)0x0) && (in_EAX <= *param_1)) && (in_EAX != 0)) {
    uVar3 = in_EAX - 1;
    uVar1 = param_1[2];
    while (uVar1 != 0) {
      uVar1 = uVar3 / param_1[2];
      uVar3 = uVar3 % param_1[2];
      param_1 = (uint *)param_1[uVar1 + 3];
      if (param_1 == (uint *)0x0) {
        return false;
      }
      uVar1 = param_1[2];
    }
    if (*param_1 < 0xfa1) {
      return ((byte)(1 << ((byte)uVar3 & 7)) & *(byte *)((uVar3 >> 3) + 0xc + (int)param_1)) != 0;
    }
    uVar2 = uVar3 % 0x7d;
    uVar1 = param_1[uVar2 + 3];
    while (uVar1 != 0) {
      if (uVar1 == uVar3 + 1) {
        return true;
      }
      uVar2 = (uVar2 + 1) % 0x7d;
      uVar1 = param_1[uVar2 + 3];
    }
  }
  return false;
}


/* END FUNCTION 0x00409e90 */

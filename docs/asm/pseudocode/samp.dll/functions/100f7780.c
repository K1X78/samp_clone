/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7780
 * Name: FUN_100f7780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100f7780(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_3 < 1) && (param_3 < 0)) {
    return 0xffffffff;
  }
  iVar2 = __allrem(param_2,param_3,0xfff1,0);
  uVar1 = (param_1 & 0xffff) + 0xfff0 + (in_EAX & 0xffff);
  uVar3 = ((param_1 & 0xffff) * iVar2) % 0xfff1 + 0xfff1 +
          (((param_1 >> 0x10) + (in_EAX >> 0x10)) - iVar2);
  uVar4 = uVar1;
  if ((0xfff0 < uVar1) && (uVar4 = uVar1 - 0xfff1, 0xfff0 < uVar4)) {
    uVar4 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar4;
}


/* END FUNCTION 0x100f7780 */

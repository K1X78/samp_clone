/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100170d0
 * Name: FUN_100170d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort * __thiscall FUN_100170d0(ushort *param_1,ushort param_2)

{
  int iVar1;
  
  if (param_2 == *param_1) {
    if (0xf < *(uint *)(param_1 + 0xd)) {
      return *(ushort **)(param_1 + 3);
    }
    return param_1 + 3;
  }
  if ((param_2 < 0x3ed) && (iVar1 = *(int *)(param_1 + (uint)param_2 * 2 + 0x13), iVar1 != 0)) {
    if (0xf < *(uint *)(iVar1 + 0x28)) {
      return *(ushort **)(iVar1 + 0x14);
    }
    return (ushort *)(iVar1 + 0x14);
  }
  return (ushort *)0x0;
}


/* END FUNCTION 0x100170d0 */

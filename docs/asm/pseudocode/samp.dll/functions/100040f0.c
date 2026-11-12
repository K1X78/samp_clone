/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100040f0
 * Name: FUN_100040f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100040f0(int param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((iVar1 != 0) && (param_2 < 2000)) {
    if (*(int *)(iVar1 + 0x3074 + (uint)param_2 * 4) != 0) {
      *(undefined1 *)(param_1 + 0x313) = 2;
      *(uint *)(param_1 + 0x314) = (uint)param_2;
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100040f0 */

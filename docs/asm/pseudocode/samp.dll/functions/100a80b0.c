/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a80b0
 * Name: FUN_100a80b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __fastcall FUN_100a80b0(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xc0);
  if (uVar1 == 0xffff) {
    if (*(short *)(param_1 + 0xbe) == -1) {
      return *(byte *)(param_1 + 0x1af) & 1;
    }
  }
  else if ((((DAT_102aca24 == 0) ||
            (iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14), iVar2 == 0)) ||
           (0x834 < uVar1)) ||
          (((*(int *)(iVar2 + 4 + (uint)uVar1 * 4) == 0 ||
            (iVar2 = *(int *)(iVar2 + 0x20d4 + (uint)uVar1 * 4), iVar2 == 0)) ||
           ((*(byte *)(iVar2 + 0x1af) & 1) == 0)))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100a80b0 */

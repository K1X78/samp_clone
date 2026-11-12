/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c23b0
 * Name: FUN_100c23b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100c23b0(byte param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = 0;
  param_2 = param_2 | 1 << (param_1 & 0x1f);
  while (param_2 != 1) {
    uVar2 = param_2 & 1;
    param_2 = param_2 >> 1;
    iVar1 = iVar1 + *(int *)(unaff_ESI +
                            ((uint)(*(ushort *)(unaff_EDI + param_2 * 2) >> 4) ^
                            (int)-uVar2 >> 4 & 0x7fU) * 4);
  }
  return iVar1;
}


/* END FUNCTION 0x100c23b0 */

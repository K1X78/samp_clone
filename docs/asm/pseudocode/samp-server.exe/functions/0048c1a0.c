/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c1a0
 * Name: FUN_0048c1a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0048c1a0(byte param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = 0;
  uVar2 = param_2 | 1 << (param_1 & 0x1f);
  while (uVar2 != 1) {
    uVar3 = uVar2 & 1;
    uVar2 = uVar2 >> 1;
    iVar1 = iVar1 + *(int *)(unaff_ESI +
                            ((uint)(*(ushort *)(unaff_EDI + uVar2 * 2) >> 4) ^
                            (int)-uVar3 >> 4 & 0x7fU) * 4);
  }
  return iVar1;
}


/* END FUNCTION 0x0048c1a0 */

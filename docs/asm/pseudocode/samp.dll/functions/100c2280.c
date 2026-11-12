/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2280
 * Name: FUN_100c2280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100c2280(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;
  
  iVar1 = 0;
  param_1 = param_1 | 0x100;
  do {
    uVar2 = param_1 >> 7;
    uVar3 = param_1 >> 8;
    param_1 = param_1 << 1;
    iVar1 = iVar1 + *(int *)(param_2 +
                            ((uint)(*(ushort *)(unaff_ESI + uVar3 * 2) >> 4) ^
                            (int)-(uVar2 & 1) >> 4 & 0x7fU) * 4);
  } while (param_1 < 0x10000);
  return iVar1;
}


/* END FUNCTION 0x100c2280 */

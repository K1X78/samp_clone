/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c070
 * Name: FUN_0048c070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0048c070(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  uint uVar4;
  
  iVar1 = 0;
  uVar2 = param_1 | 0x100;
  do {
    uVar3 = uVar2 >> 7;
    uVar4 = uVar2 >> 8;
    uVar2 = uVar2 << 1;
    iVar1 = iVar1 + *(int *)(param_2 +
                            ((uint)(*(ushort *)(unaff_ESI + uVar4 * 2) >> 4) ^
                            (int)-(uVar3 & 1) >> 4 & 0x7fU) * 4);
  } while (uVar2 < 0x10000);
  return iVar1;
}


/* END FUNCTION 0x0048c070 */

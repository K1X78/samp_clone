/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013bd0
 * Name: FUN_10013bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013bd0(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x22);
  uVar3 = 0;
  if (-1 < iVar1) {
    uVar4 = 0;
    do {
      if ((uVar3 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + uVar4 * 4) == 1)) {
        iVar2 = *(int *)(param_1 + 0x26 + uVar4 * 4);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        if ((*(int *)(iVar2 + 4) != 0) && (iVar2 = FUN_100aba90(), iVar2 == 0)) {
          FUN_1009f470(*(int *)(param_1 + 0x1f86 + uVar4 * 4) != 0);
        }
      }
      uVar3 = uVar3 + 1;
      uVar4 = (uint)uVar3;
    } while ((int)uVar4 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x10013bd0 */

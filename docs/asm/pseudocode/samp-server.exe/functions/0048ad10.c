/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ad10
 * Name: FUN_0048ad10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048ad10(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_2 + uVar3 * 4);
      if (param_1 < uVar1) {
        iVar2 = uVar1 - param_1;
      }
      else {
        iVar2 = 0;
      }
      *(int *)(param_2 + uVar3 * 4) = iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}


/* END FUNCTION 0x0048ad10 */

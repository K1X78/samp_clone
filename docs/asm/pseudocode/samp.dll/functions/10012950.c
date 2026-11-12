/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012950
 * Name: FUN_10012950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10012950(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_10156b74 == 0) {
    DAT_10156b74 = FUN_1002e2b0();
  }
  iVar1 = FUN_1002e2b0();
  iVar2 = iVar1 - DAT_10156b74;
  iVar4 = 0;
  if (-1 < *param_1) {
    piVar3 = param_1 + 0x835;
    do {
      if (piVar3[-0x834] != 0) {
        FUN_100a9240((float)iVar2 * 0.001);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 <= *param_1);
  }
  DAT_10156b74 = iVar1;
  return;
}


/* END FUNCTION 0x10012950 */

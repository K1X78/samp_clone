/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001edc0
 * Name: FUN_1001edc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001edc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  
  piVar2 = (int *)(param_1 + 0xfa4);
  psVar4 = (short *)(param_1 + 4);
  iVar3 = 100;
  do {
    if (*piVar2 != 0) {
      iVar1 = FUN_100a07b0(*(undefined4 *)(psVar4 + 1));
      if (iVar1 != 0) {
        FUN_1001eb40(psVar4);
        if (*(int *)(psVar4 + 1) == 0x219) {
          *psVar4 = *psVar4 + 1;
          psVar4[1] = 0x239;
          psVar4[2] = 0;
          FUN_1001eb40(psVar4);
          *psVar4 = *psVar4 + 1;
          FUN_1001eb40(psVar4);
          *psVar4 = *psVar4 + 1;
          FUN_1001eb40(psVar4);
        }
        if (*(int *)(psVar4 + 1) == 0x21a) {
          *psVar4 = *psVar4 + 1;
          psVar4[1] = 0x23a;
          psVar4[2] = 0;
          FUN_1001eb40(psVar4);
          *psVar4 = *psVar4 + 1;
          FUN_1001eb40(psVar4);
          *psVar4 = *psVar4 + 1;
          FUN_1001eb40(psVar4);
        }
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    psVar4 = psVar4 + 0x14;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* END FUNCTION 0x1001edc0 */

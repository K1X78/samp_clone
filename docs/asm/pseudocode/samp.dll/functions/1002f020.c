/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f020
 * Name: FUN_1002f020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_1002f020(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  iVar3 = 3;
  psVar4 = *(short **)(*(int *)(*param_1 + param_4 * 4) + 5);
  psVar5 = (short *)&param_2;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    sVar2 = *psVar5;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (sVar1 == sVar2);
  return 0;
}


/* END FUNCTION 0x1002f020 */

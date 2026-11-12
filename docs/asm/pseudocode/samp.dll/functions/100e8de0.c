/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8de0
 * Name: FUN_100e8de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e8de0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 100) != 0) && (param_2 != 0)) {
    piVar3 = (int *)FUN_100d69b0(*(int *)(param_1 + 100));
    for (iVar2 = *piVar3; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      pcVar4 = (char *)(iVar2 + 0xc);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_100de8c0((char *)(iVar2 + 0xc),param_2,(int)pcVar4 - (iVar2 + 0xd));
      if (iVar5 != 0) {
        FUN_100d8ae0(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100e8de0 */

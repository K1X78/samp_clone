/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a0d0
 * Name: FUN_1009a0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009a0d0(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char local_34 [52];
  
  FUN_10086cf0(0xb,4);
  if (param_1 == 0) {
    iVar4 = 0x32;
    pcVar1 = local_34;
    do {
      pcVar3 = pcVar1;
      if (pcVar3[(int)"Default Rate" - (int)local_34] == '\0') {
        if (iVar4 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1009a134;
      }
      *pcVar3 = pcVar3[(int)"Default Rate" - (int)local_34];
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3 + 1;
    } while (iVar4 != 0);
    *pcVar3 = '\0';
  }
  else {
    FUN_1007bc80(local_34,0x32,"%d Hz",param_1);
  }
LAB_1009a134:
  cVar2 = FUN_1008a250(local_34,0);
  if (cVar2 == '\0') {
    FUN_1008a120(local_34,param_1);
  }
  return;
}


/* END FUNCTION 0x1009a0d0 */

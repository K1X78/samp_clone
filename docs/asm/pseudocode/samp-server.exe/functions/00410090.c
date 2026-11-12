/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410090
 * Name: FUN_00410090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_00410090(void)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  int *in_EAX;
  int iVar4;
  
  if ((((*(int *)*in_EAX == 1) && (pcVar1 = *(char **)((int *)*in_EAX)[3], *pcVar1 == -0x67)) &&
      ((pcVar1[3] & 8U) == 0)) &&
     (((piVar2 = *(int **)(pcVar1 + 0x10), piVar2 != (int *)0x0 && (*piVar2 == 1)) &&
      (**(char **)piVar2[3] == -0x66)))) {
    pbVar3 = *(byte **)(pcVar1 + 4);
    iVar4 = FUN_00408450(pbVar3,&DAT_004b2484);
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = FUN_00408450(pbVar3,&DAT_004b2480);
    return (iVar4 != 0) - 1U & 2;
  }
  return 0;
}


/* END FUNCTION 0x00410090 */

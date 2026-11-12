/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebaa0
 * Name: FUN_100ebaa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ebaa0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_80 [128];
  
  uVar2 = 0;
  if (param_2 != 0) {
    FUN_100eba40(0x80);
    if (*(int *)(*param_1 + 0x6c) != 0) {
      FUN_100dec30(*param_1,5,2);
    }
    pcVar3 = local_80;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_100e43c0(param_2,local_80,(int)pcVar3 - (int)(local_80 + 1));
    if (*(int *)(*param_1 + 0x6c) != 0) {
      FUN_100dec70(*param_1,5);
    }
  }
  return uVar2;
}


/* END FUNCTION 0x100ebaa0 */

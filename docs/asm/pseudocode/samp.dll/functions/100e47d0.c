/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e47d0
 * Name: FUN_100e47d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e47d0(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = *param_1;
  if ((param_1[0xa5] == 0) || (*(int *)(iVar4 + 0x3b0) == 0)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x238);
  }
  else {
    puVar2 = *(undefined4 **)(iVar4 + 0x23c);
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar4 = FUN_100de8c0(*puVar2,param_2,(int)pcVar3 - (int)(param_2 + 1));
    if (iVar4 != 0) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return *puVar2;
}


/* END FUNCTION 0x100e47d0 */

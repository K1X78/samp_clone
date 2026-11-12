/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e6e0
 * Name: FUN_0040e6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040e6e0(char *param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = param_2;
  pcVar2 = param_1;
  if ((param_1[3] & 4U) != 0) {
    *param_2 = *(uint *)(param_1 + 4);
    return 1;
  }
  cVar1 = *param_1;
  if (cVar1 == -0x7f) {
    iVar4 = FUN_00408b60(*(char **)(param_1 + 4),param_2);
  }
  else {
    if (cVar1 == -100) {
      iVar4 = FUN_0040e6e0(*(char **)(param_1 + 8),(uint *)&param_1);
      if (iVar4 == 0) {
        return 0;
      }
      *param_2 = -(int)param_1;
      pcVar2[3] = pcVar2[3] | 4;
      *pcVar2 = -0x7f;
      *(uint *)(pcVar2 + 4) = *param_2;
      return 1;
    }
    if (cVar1 != -99) {
      return 0;
    }
    iVar4 = FUN_0040e6e0(*(char **)(param_1 + 8),param_2);
  }
  if (iVar4 != 0) {
    pcVar2[3] = pcVar2[3] | 4;
    *pcVar2 = -0x7f;
    *(uint *)(pcVar2 + 4) = *puVar3;
  }
  return iVar4;
}


/* END FUNCTION 0x0040e6e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8ba0
 * Name: FUN_100d8ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d8ba0(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_104 [260];
  
  if ((*(int *)(param_1 + 0x548) != 0) || (*(int *)(param_1 + 0x150) != 0)) {
    FUN_100cc720(local_104,0x100,param_2,&stack0x0000000c);
    pcVar3 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar5 = *(char **)(param_1 + 0x150);
    if ((pcVar5 != (char *)0x0) && (*(int *)(param_1 + 0x48a8) == 0)) {
      pcVar4 = local_104;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *(undefined4 *)(param_1 + 0x48a8) = 1;
    }
    if (*(int *)(param_1 + 0x548) != 0) {
      pcVar2 = *(code **)(param_1 + 0x1c0);
      pcVar3[(int)(local_104 + -(int)(local_104 + 1))] = '\n';
      pcVar3 = pcVar3 + (1 - (int)(local_104 + 1));
      local_104[(int)pcVar3] = '\0';
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,0,local_104,pcVar3,*(undefined4 *)(param_1 + 0x14c));
        return;
      }
      _fwrite(&DAT_10124f50,2,1,*(FILE **)(param_1 + 0x148));
      _fwrite(local_104,(size_t)pcVar3,1,*(FILE **)(param_1 + 0x148));
    }
  }
  return;
}


/* END FUNCTION 0x100d8ba0 */

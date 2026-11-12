/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493460
 * Name: FUN_00493460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __fastcall FUN_00493460(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_40 [64];
  
  iVar3 = *(int *)(param_1 + 0x2c) + 1;
  *(int *)(param_1 + 0x2c) = iVar3;
  _sprintf(local_40,"gamemode%u",iVar3);
  pcVar4 = " ";
  pcVar2 = (char *)FUN_00490ba0(DAT_004fc43c,local_40);
  pcVar2 = _strtok(pcVar2,pcVar4);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar2 + 1) goto LAB_004934f9;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  _sprintf(local_40,"gamemode%u",0);
  pcVar4 = " ";
  pcVar2 = (char *)FUN_00490ba0(DAT_004fc43c,local_40);
  pcVar2 = _strtok(pcVar2,pcVar4);
LAB_004934f9:
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar2 + 1) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}


/* END FUNCTION 0x00493460 */

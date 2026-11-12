/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d580
 * Name: FUN_0046d580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0046d580(char *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char local_44 [68];
  
  FUN_00468e60(param_3,local_44,0x10);
  pcVar2 = local_44;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(local_44 + 1);
  for (; (iVar3 < param_4 && (param_2 != 0)); param_2 = param_2 + -1) {
    *param_1 = ((param_5 == 0) - 1U & 0x10) + 0x20;
    param_4 = param_4 + -1;
    param_1 = param_1 + 1;
  }
  iVar5 = 0;
  pcVar4 = param_1;
  if (pcVar2 != local_44 + 1) {
    do {
      pcVar4 = param_1;
      if (param_2 == 0) break;
      pcVar4 = param_1 + 1;
      *param_1 = local_44[iVar5];
      param_2 = param_2 + -1;
      iVar5 = iVar5 + 1;
      param_1 = pcVar4;
    } while (iVar5 != iVar3);
  }
  *pcVar4 = '\0';
  return;
}


/* END FUNCTION 0x0046d580 */

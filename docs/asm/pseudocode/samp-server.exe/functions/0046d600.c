/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d600
 * Name: FUN_0046d600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0046d600(char *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char local_44 [68];
  
  FUN_00468e60(param_3,local_44,2);
  pcVar4 = local_44;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)(local_44 + 1);
  for (; (iVar5 < param_4 && (param_2 != 0)); param_2 = param_2 + -1) {
    *param_1 = ((param_5 == 0) - 1U & 0x10) + 0x20;
    param_4 = param_4 + -1;
    param_1 = param_1 + 1;
  }
  iVar3 = 0;
  pcVar2 = param_1;
  if (pcVar4 != local_44 + 1) {
    do {
      pcVar2 = param_1;
      if (param_2 == 0) break;
      pcVar2 = param_1 + 1;
      *param_1 = local_44[iVar3];
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 1;
      param_1 = pcVar2;
    } while (iVar3 != iVar5);
  }
  *pcVar2 = '\0';
  return;
}


/* END FUNCTION 0x0046d600 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f8080
 * Name: FUN_100f8080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f8080(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *param_1;
  bVar2 = false;
  iVar3 = 0xff;
  while (((cVar1 != '\0' && (cVar1 != '=')) && (iVar3 != 0))) {
    *param_2 = cVar1;
    cVar1 = param_1[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
  }
  *param_2 = '\0';
  pcVar4 = param_1 + 1;
  if (*param_1 != '=') {
    return 0;
  }
  bVar6 = *pcVar4 == '\"';
  if (bVar6) {
    pcVar4 = param_1 + 2;
  }
  cVar1 = *pcVar4;
  iVar3 = 0x3ff;
  do {
    if ((cVar1 == '\0') || (iVar5 = iVar3 + -1, iVar3 == 0)) {
      *param_3 = '\0';
      *param_4 = pcVar4;
      return 1;
    }
    switch(cVar1) {
    default:
switchD_100f80fa_caseD_b:
      bVar2 = false;
      *param_3 = cVar1;
      goto LAB_100f8127;
    case '\"':
      if ((bVar2) || (!bVar6)) goto switchD_100f80fa_caseD_b;
    case '\n':
    case '\r':
      iVar5 = 0;
      break;
    case ',':
      if (bVar6) goto switchD_100f80fa_caseD_b;
      iVar5 = 0;
      break;
    case '\\':
      if (bVar2) goto switchD_100f80fa_caseD_b;
      bVar2 = true;
      *param_3 = '\\';
LAB_100f8127:
      param_3 = param_3 + 1;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar5;
  } while( true );
}


/* END FUNCTION 0x100f8080 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406b00
 * Name: FUN_00406b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00406b00(int *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_38;
  char local_34;
  char local_33 [51];
  
  bVar3 = false;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_38);
  if (0x31 < local_38) {
    return 0;
  }
  FUN_00403350((int)&local_34,param_2,0,0x32);
  iVar6 = 0;
  pcVar5 = &local_34;
  while ((local_34 != '\0' && (local_34 < '!'))) {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    local_34 = *pcVar1;
  }
  if (*pcVar5 == '-') {
    bVar3 = true;
  }
  else if (*pcVar5 != '+') goto LAB_00406b83;
  pcVar5 = pcVar5 + 1;
LAB_00406b83:
  iVar4 = _isdigit((int)*pcVar5);
  while (iVar4 != 0) {
    cVar2 = *pcVar5;
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    iVar6 = cVar2 + -0x30 + iVar6 * 10;
    iVar4 = _isdigit((int)*pcVar1);
  }
  if (bVar3) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* END FUNCTION 0x00406b00 */

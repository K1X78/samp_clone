/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067ae0
 * Name: FUN_10067ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10067ae0(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_208 [516];
  
  pcVar2 = local_208;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  _vsprintf(local_208,param_2,&stack0x0000000c);
  pcVar2 = local_208;
  while (local_208[0] != '\0') {
    if (('\0' < *pcVar2) && (*pcVar2 < ' ')) {
      *pcVar2 = ' ';
    }
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    local_208[0] = *pcVar1;
  }
  FUN_10067650(4,local_208,0,*(undefined4 *)(param_1 + 0x126),0);
  return;
}


/* END FUNCTION 0x10067ae0 */

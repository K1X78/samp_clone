/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004697f0
 * Name: FUN_004697f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004697f0(char *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte local_d0 [32];
  undefined4 local_b0 [27];
  char local_44 [68];
  
  FUN_004695c0((int)local_b0);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != param_1 + 1) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00469610((int)local_b0,(int)param_1,(int)pcVar2 - (int)(param_1 + 1));
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != param_2 + 1) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00469610((int)local_b0,(int)param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  FUN_00469670(local_b0,(int)local_d0);
  FUN_004697b0((int)local_44,local_d0);
  pcVar2 = param_3;
  for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  _strncpy(param_3,local_44,param_4 - 1);
  return;
}


/* END FUNCTION 0x004697f0 */

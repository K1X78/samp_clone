/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049e3a0
 * Name: FUN_0049e3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0049e3a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *buf;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  short *psVar7;
  
  if (DAT_0051c1a0 != 0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    buf = _malloc((size_t)(pcVar2 + DAT_0051c1a8 + (2 - (int)(param_1 + 1))));
    uVar5 = DAT_0051c1a8;
    pcVar2 = DAT_0051c1a4;
    pcVar6 = buf;
    for (uVar4 = DAT_0051c1a8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    psVar3 = (short *)(buf + DAT_0051c1a8);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *psVar3 = (short)pcVar2 - ((short)param_1 + 1);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar6 = param_1;
    psVar7 = psVar3 + 1;
    for (uVar5 = (uint)((int)pcVar2 - (int)(param_1 + 1)) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      psVar7 = psVar7 + 2;
    }
    for (uVar5 = (int)pcVar2 - (int)(param_1 + 1) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      psVar7 = (short *)((int)psVar7 + 1);
    }
    pcVar2 = param_1 + 1;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    sendto(DAT_004ebdf4,buf,(int)(param_1 + (-(int)buf - (int)pcVar2) + (int)(psVar3 + 1)),0,
           (sockaddr *)&DAT_0051c190,0x10);
    _free(buf);
  }
  return;
}


/* END FUNCTION 0x0049e3a0 */

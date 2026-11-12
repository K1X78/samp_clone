/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492dc0
 * Name: FUN_00492dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall FUN_00492dc0(void *this,byte param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  char *extraout_EDX;
  uint uVar4;
  
  if (1 < param_1) {
    return 0xff;
  }
  uVar4 = (uint)param_1;
  bVar1 = *(byte *)(uVar4 + 0x1352 + (int)this);
  if (0x1f < bVar1) {
    return 0xff;
  }
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  if (0x1f < (uint)((int)pcVar3 - (int)(param_2 + 1))) {
    param_2[0x1f] = '\0';
  }
  FUN_00492da0((int)this);
  pcVar3 = extraout_EDX;
  do {
    cVar2 = *pcVar3;
    pcVar3[((uVar4 + (uint)bVar1 * 2) * 0x20 - (int)extraout_EDX) + 0x21 + (int)this] = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = (char *)(uVar4 + 0x1352 + (int)this);
  *pcVar3 = *pcVar3 + '\x01';
  return bVar1;
}


/* END FUNCTION 0x00492dc0 */

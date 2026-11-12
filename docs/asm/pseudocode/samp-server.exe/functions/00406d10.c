/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406d10
 * Name: FUN_00406d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00406d10(void *this,byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  uint in_EAX;
  char cVar4;
  char *pcVar5;
  byte local_8;
  byte local_4;
  
  if (0x3f < (int)in_EAX) {
    return 0;
  }
  if ((in_EAX & 0x3f) == 0) {
    cVar4 = '`';
  }
  else {
    cVar4 = (char)(in_EAX & 0x3f) + ' ';
  }
  *(char *)this = cVar4;
  pcVar2 = (char *)((int)this + 1);
  for (; 0 < (int)in_EAX; in_EAX = in_EAX - 3) {
    bVar1 = *param_1 >> 2;
    bVar3 = *param_1 << 4;
    if (1 < (int)in_EAX) {
      bVar3 = bVar3 | param_1[1] >> 4;
      local_8 = param_1[1] * '\x04';
      if (2 < (int)in_EAX) {
        local_4 = param_1[2];
        local_8 = local_8 | local_4 >> 6;
      }
    }
    cVar4 = '`';
    if (bVar1 != 0) {
      cVar4 = bVar1 + 0x20;
    }
    *pcVar2 = cVar4;
    if ((bVar3 & 0x3f) == 0) {
      cVar4 = '`';
    }
    else {
      cVar4 = (bVar3 & 0x3f) + 0x20;
    }
    pcVar2[1] = cVar4;
    pcVar5 = pcVar2 + 2;
    if (1 < (int)in_EAX) {
      if ((local_8 & 0x3f) == 0) {
        cVar4 = '`';
      }
      else {
        cVar4 = (local_8 & 0x3f) + 0x20;
      }
      *pcVar5 = cVar4;
      pcVar5 = pcVar2 + 3;
    }
    if (2 < (int)in_EAX) {
      if ((local_4 & 0x3f) == 0) {
        cVar4 = '`';
      }
      else {
        cVar4 = (local_4 & 0x3f) + 0x20;
      }
      *pcVar5 = cVar4;
      pcVar5 = pcVar5 + 1;
    }
    param_1 = param_1 + 3;
    pcVar2 = pcVar5;
  }
  *pcVar2 = '\0';
  return 1;
}


/* END FUNCTION 0x00406d10 */

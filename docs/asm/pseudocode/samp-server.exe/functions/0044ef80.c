/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ef80
 * Name: FUN_0044ef80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __thiscall FUN_0044ef80(void *this,char param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  
  pcVar2 = inet_ntoa((in_addr)*(_union_1226 *)this);
  pcVar3 = &DAT_004ed5ac;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_1 != '\0') {
    puVar4 = (undefined2 *)0x4ed5ab;
    do {
      pcVar2 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined2 *)((int)puVar4 + 1);
    } while (*pcVar2 != '\0');
    *puVar4 = 0x3a;
    pcVar2 = &DAT_004ed5ac;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    __itoa((uint)*(ushort *)((int)this + 4),pcVar3,10);
  }
  return &DAT_004ed5ac;
}


/* END FUNCTION 0x0044ef80 */

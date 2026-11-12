/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033260
 * Name: FUN_10033260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __thiscall FUN_10033260(_union_1226 *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  
  pcVar2 = inet_ntoa((in_addr)param_1->S_un_b);
  pcVar3 = &DAT_10156be0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_2 != '\0') {
    puVar4 = (undefined2 *)0x10156bdf;
    do {
      pcVar2 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined2 *)((int)puVar4 + 1);
    } while (*pcVar2 != '\0');
    *puVar4 = 0x3a;
    pcVar2 = &DAT_10156be0;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    __itoa((uint)param_1[1].S_un_w.s_w1,pcVar3,10);
  }
  return &DAT_10156be0;
}


/* END FUNCTION 0x10033260 */

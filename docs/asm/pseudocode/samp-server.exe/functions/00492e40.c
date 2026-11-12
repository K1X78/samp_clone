/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492e40
 * Name: FUN_00492e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00492e40(void *this,byte param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *extraout_EDX;
  
  if (param_1 < 2) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x1f < (uint)((int)pcVar2 - (int)(param_2 + 1))) {
      param_2[0x1f] = '\0';
    }
    FUN_00492da0((int)this);
    pcVar2 = extraout_EDX;
    do {
      cVar1 = *pcVar2;
      pcVar2[((uint)param_1 * 0x20 - (int)extraout_EDX) + 0x321 + (int)this] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


/* END FUNCTION 0x00492e40 */

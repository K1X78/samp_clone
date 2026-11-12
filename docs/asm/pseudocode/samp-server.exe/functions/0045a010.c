/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045a010
 * Name: FUN_0045a010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045a010(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0044fea0((void *)((int)this + 8),(undefined4 *)param_1,
                 (uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    return;
  }
  FUN_0044fea0((void *)((int)this + 8),(undefined4 *)0x0,0);
  return;
}


/* END FUNCTION 0x0045a010 */

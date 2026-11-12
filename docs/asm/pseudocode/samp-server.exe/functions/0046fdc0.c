/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fdc0
 * Name: FUN_0046fdc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0046fdc0(void *this,ushort param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (uint)param_1 * 0x19 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar2 + 0x26d24 + (int)this] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* END FUNCTION 0x0046fdc0 */

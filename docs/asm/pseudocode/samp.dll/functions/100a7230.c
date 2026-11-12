/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7230
 * Name: FUN_100a7230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7230(int param_1,byte param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (uint)param_2 * 0x20 - (int)param_3;
  do {
    cVar1 = *param_3;
    param_3[iVar2 + 0x321 + param_1] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  return;
}


/* END FUNCTION 0x100a7230 */

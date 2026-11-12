/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7200
 * Name: FUN_100a7200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7200(int param_1,byte param_2,byte param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = ((uint)param_2 + (uint)param_3 * 2) * 0x20 - (int)param_4;
  do {
    cVar1 = *param_4;
    param_4[iVar2 + 0x21 + param_1] = cVar1;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  return;
}


/* END FUNCTION 0x100a7200 */

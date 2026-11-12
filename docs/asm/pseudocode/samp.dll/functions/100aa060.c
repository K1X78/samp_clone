/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa060
 * Name: FUN_100aa060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100aa060(char *param_1,SIZE_T param_2,char param_3)

{
  char *lpAddress;
  SIZE_T dwSize;
  char cVar1;
  
  dwSize = param_2;
  lpAddress = param_1;
  VirtualProtect(param_1,param_2,0x40,(PDWORD)&param_1);
  cVar1 = param_3;
  if (param_3 != *lpAddress) {
    do {
      Sleep(1);
    } while (cVar1 != *lpAddress);
    VirtualProtect(lpAddress,dwSize,0x40,(PDWORD)&param_1);
  }
  return;
}


/* END FUNCTION 0x100aa060 */

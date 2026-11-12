/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040910
 * Name: FUN_10040910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10040910(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  do {
    iVar3 = 0;
    do {
      uVar2 = FUN_100436c0();
      param_1[iVar3] = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    param_1[3] = param_1[3] | 0x80000000;
    *param_1 = *param_1 | 1;
    cVar1 = FUN_1003fd80(param_1,5);
  } while (cVar1 == '\0');
  return;
}


/* END FUNCTION 0x10040910 */

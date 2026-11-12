/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028040
 * Name: FUN_10028040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10028040(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = FUN_10027060(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x85)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 1);
  }
  return iVar2;
}


/* END FUNCTION 0x10028040 */

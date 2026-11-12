/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6a30
 * Name: FUN_100c6a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100c6a30(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_102aca0c != 0) {
    iVar1 = FUN_100658c0("fontface");
    if (iVar1 != 0) {
      pcVar2 = (char *)FUN_100658c0("fontface");
      return pcVar2;
    }
  }
  return s_Arial_101554a0;
}


/* END FUNCTION 0x100c6a30 */

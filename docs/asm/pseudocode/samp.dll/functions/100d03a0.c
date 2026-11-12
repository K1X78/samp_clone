/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d03a0
 * Name: FUN_100d03a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100d03a0(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_102acce4 == 0) {
    iVar1 = FUN_100e41b0(&DAT_102acce8,7,&LAB_100e4500,&LAB_100e4530,FUN_100d0080);
    if (iVar1 == 0) {
      DAT_102acce4 = 1;
    }
  }
  return (iVar1 != 0) - 1 & 0x102acce8;
}


/* END FUNCTION 0x100d03a0 */

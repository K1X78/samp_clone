/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004115c0
 * Name: FUN_004115c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004115c0(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  if (((unaff_ESI != (undefined4 *)0x0) && ((code *)*unaff_ESI != (code *)0x0)) &&
     (-1 < (int)unaff_ESI[2])) {
    iVar1 = (*(code *)*unaff_ESI)(unaff_ESI[1],unaff_ESI[2]);
    if (iVar1 == 0) {
      unaff_ESI[2] = 0xffffffff;
      return 0;
    }
    unaff_ESI[2] = unaff_ESI[2] + 1;
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x004115c0 */

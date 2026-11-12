/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a810
 * Name: FUN_0042a810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0042a810(void)

{
  void *pvVar1;
  int iVar2;
  void *this;
  int *unaff_ESI;
  
  pvVar1 = (void *)FUN_0040ca90();
  if (this <= pvVar1) {
    iVar2 = FUN_004238d0(this,unaff_ESI);
    if ((iVar2 == 0) && (iVar2 = FUN_0041f780(), iVar2 != 0)) {
      FUN_00427610();
    }
    return iVar2;
  }
  iVar2 = FUN_0041d790();
  return iVar2;
}


/* END FUNCTION 0x0042a810 */

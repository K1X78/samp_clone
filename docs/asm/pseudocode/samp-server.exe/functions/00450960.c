/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450960
 * Name: FUN_00450960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00450960(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar2 = *(int **)this;
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)((int)this + 4));
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00450960 */

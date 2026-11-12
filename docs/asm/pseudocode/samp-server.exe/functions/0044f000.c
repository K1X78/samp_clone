/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044f000
 * Name: FUN_0044f000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_0044f000(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if (DAT_004ed5a8 == '\0') {
    return (bool)('\x01' - (*(short *)((int)this + 6) != *(short *)((int)param_1 + 6)));
  }
  uVar1 = FUN_0044eec0(this,param_1);
  if (((char)uVar1 != '\0') && (*(short *)((int)this + 6) == *(short *)((int)param_1 + 6))) {
    return true;
  }
  return false;
}


/* END FUNCTION 0x0044f000 */

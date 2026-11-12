/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044f050
 * Name: FUN_0044f050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_0044f050(void *this,uint *param_1)

{
  undefined4 uVar1;
  void *this_00;
  
  if (DAT_004ed5a8 == '\0') {
    return *(ushort *)((int)param_1 + 6) < *(ushort *)((int)this + 6);
  }
  uVar1 = FUN_0044ef20(this,param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0044eec0(this_00,(int *)param_1);
    if (((char)uVar1 == '\0') || (*(ushort *)((int)this + 6) <= *(ushort *)((int)param_1 + 6))) {
      return false;
    }
  }
  return true;
}


/* END FUNCTION 0x0044f050 */

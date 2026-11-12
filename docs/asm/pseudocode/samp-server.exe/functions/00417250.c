/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417250
 * Name: FUN_00417250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_00417250(void *this,uint param_1,uint param_2)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  
  if ((*(int *)((int)this + 8) == *(int *)(in_EAX + 0x18)) && (*(short *)((int)this + 0x10) == 2)) {
    if ((*(uint *)((int)this + 0x18) & param_1) != 0 || (*(uint *)((int)this + 0x1c) & param_2) != 0
       ) {
      return false;
    }
    bVar1 = FUN_00415880();
    return CONCAT31(extraout_var,bVar1) != 0;
  }
  return false;
}


/* END FUNCTION 0x00417250 */

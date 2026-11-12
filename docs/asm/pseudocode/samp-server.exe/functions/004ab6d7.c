/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ab6d7
 * Name: __umatherr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_004ec888)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x4ec88c);
      goto LAB_004ab6f3;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_004ab6f3:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_004adf5a();
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


/* END FUNCTION 0x004ab6d7 */

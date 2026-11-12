/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450490
 * Name: FUN_00450490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00450490(void *this,int *param_1)

{
  char extraout_AL;
  uint3 extraout_var;
  int iVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0x28))();
  if ((extraout_AL == '\0') && (*(char *)((int)this + 0xc10) != '\0')) {
    piVar2 = (int *)((int)this + 0x3dc);
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *piVar2;
      piVar2 = piVar2 + 1;
      param_1 = param_1 + 1;
    }
    return CONCAT31(extraout_var,1);
  }
  return (uint)extraout_var << 8;
}


/* END FUNCTION 0x00450490 */

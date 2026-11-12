/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ae60
 * Name: FUN_0049ae60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049ae60(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = (int *)((int)this + 4);
  piVar2 = piVar1;
  if (0xf < *(uint *)((int)this + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 - (int)piVar2;
  }
  if (param_3 != 0) {
    param_3 = param_3 - param_2;
  }
  FUN_00469a00(this,uVar3,param_3);
  if (*(uint *)((int)this + 0x18) < 0x10) {
    *param_1 = (int)piVar1 + uVar3;
    return;
  }
  *param_1 = *piVar1 + uVar3;
  return;
}


/* END FUNCTION 0x0049ae60 */

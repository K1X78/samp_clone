/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069280
 * Name: FUN_10069280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10069280(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    piVar1 = (int *)(param_1 + 8);
    FUN_10090b30(1,&DAT_10117a39,10,0xaf,0x23a,0x28,1,piVar1);
    iVar2 = FUN_10065890(&DAT_1011c30c);
    if (iVar2 != 0) {
      FUN_10085940(1);
      FUN_10085460();
    }
    FUN_10085e90(0xf0050505,0xc8808080,0);
    (**(code **)(*(int *)*piVar1 + 0x48))(0xffffffff);
    *(undefined4 *)(*piVar1 + 0x133) = 0xff969696;
    *(undefined4 *)(*piVar1 + 0x12f) = 0xffb92228;
    *(undefined4 *)(*piVar1 + 299) = 0xff0a0a0f;
    (**(code **)(*(int *)*piVar1 + 0x38))(0);
                    /* WARNING: Could not recover jumptable at 0x10069333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*piVar1 + 0x40))(0);
    return;
  }
  return;
}


/* END FUNCTION 0x10069280 */

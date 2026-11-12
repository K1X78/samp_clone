/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100993c0
 * Name: FUN_100993c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100993c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_1007b4a0();
  (**(code **)(*piVar1 + 0xac))(piVar1,0,0,1,0x3f3f,0x3f800000,0);
  iVar2 = (**(code **)(*piVar1 + 0xa4))(piVar1);
  if (-1 < iVar2) {
    piVar3 = (int *)*param_1;
    (**(code **)(*piVar3 + 0x10))(piVar3);
    (**(code **)(*piVar1 + 0xe4))(piVar1,8,3);
    FUN_10090360(piVar3);
    (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1);
    (**(code **)(*piVar1 + 0xa8))(piVar1);
  }
  return 0;
}


/* END FUNCTION 0x100993c0 */

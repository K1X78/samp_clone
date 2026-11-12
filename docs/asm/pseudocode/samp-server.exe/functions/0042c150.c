/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042c150
 * Name: FUN_0042c150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042c150(void *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBX;
  
  uVar1 = *(undefined4 *)(unaff_EBX + 4);
  FUN_0040c2c0();
  FUN_0040c690(0,0);
  uVar2 = FUN_0042a7d0(0);
  if (uVar2 == 0) {
    uVar2 = FUN_0042bff0(param_1,uVar1,(uint)param_1,0,param_2);
  }
  FUN_0040c340();
  return uVar2;
}


/* END FUNCTION 0x0042c150 */

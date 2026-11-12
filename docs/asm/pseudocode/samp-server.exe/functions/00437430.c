/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437430
 * Name: FUN_00437430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00437430(int param_1,byte *param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = FUN_00408380((char *)param_2);
  FUN_00407e50(*(int *)(param_1 + 0x44));
  psVar2 = FUN_0041b710(param_1,param_2,uVar1,param_3,1,0);
  if (psVar2 == (short *)0x0) {
    FUN_00433740(param_1,param_2,param_3,1,0,0x42ea70,0,0);
  }
  uVar1 = FUN_004340c0(0);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x00437430 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450940
 * Name: FUN_00450940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00450940(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  uVar2 = FUN_00450730((int)param_1);
  return (ushort)uVar2 < uVar1;
}


/* END FUNCTION 0x00450940 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038990
 * Name: FUN_10038990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_10038990(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  uVar2 = FUN_100387a0();
  return uVar2 < uVar1;
}


/* END FUNCTION 0x10038990 */

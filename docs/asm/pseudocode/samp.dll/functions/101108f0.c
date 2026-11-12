/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101108f0
 * Name: FUN_101108f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_101108f0(undefined4 *param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (((param_1[3] != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) {
    local_8 = 0;
    BVar1 = FlushInstructionCache((HANDLE)*param_1,(LPCVOID)param_1[1],param_1[2]);
    if (BVar1 != 0) {
      VirtualProtect((LPVOID)param_1[1],param_1[2],param_1[3],&local_8);
    }
  }
  return;
}


/* END FUNCTION 0x101108f0 */

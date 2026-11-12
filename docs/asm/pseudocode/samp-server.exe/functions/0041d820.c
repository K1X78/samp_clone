/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d820
 * Name: FUN_0041d820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041d820(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 9)) {
    uVar1 = *(undefined4 *)(&DAT_004ed420 + param_1 * 4);
    *param_2 = uVar1;
    *param_3 = *(undefined4 *)(&DAT_004ed444 + param_1 * 4);
    if (param_4 != 0) {
      *(undefined4 *)(&DAT_004ed444 + param_1 * 4) = uVar1;
    }
    return 0;
  }
  uVar1 = FUN_0041d7c0();
  return uVar1;
}


/* END FUNCTION 0x0041d820 */

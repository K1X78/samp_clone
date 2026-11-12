/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481910
 * Name: FUN_00481910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00481910(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = -1;
  if (param_1[1] != 0) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 != 0) {
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != param_1[1]);
    if (iVar3 != -1) {
      FUN_004818a0(param_1,iVar3 + 1);
      return;
    }
  }
  FUN_004818a0(param_1,0);
  return;
}


/* END FUNCTION 0x00481910 */

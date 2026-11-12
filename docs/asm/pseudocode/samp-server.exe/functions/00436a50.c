/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436a50
 * Name: FUN_00436a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00436a50(int *param_1)

{
  int *piVar1;
  int in_EAX;
  uint uVar2;
  int *local_4;
  
  local_4 = param_1;
  uVar2 = FUN_00436170(in_EAX,(int)param_1,-1,&local_4,(int *)0x0);
  piVar1 = local_4;
  if (uVar2 == 0) {
    uVar2 = FUN_004416d0(local_4);
    while (uVar2 == 100) {
      FUN_00434560();
      uVar2 = FUN_004369f0();
      if (uVar2 != 0) {
        FUN_00432960(in_EAX);
        return uVar2;
      }
      uVar2 = FUN_004416d0(piVar1);
    }
    uVar2 = FUN_00432960(in_EAX);
  }
  return uVar2;
}


/* END FUNCTION 0x00436a50 */

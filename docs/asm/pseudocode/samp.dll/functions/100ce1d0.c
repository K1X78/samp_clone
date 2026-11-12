/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce1d0
 * Name: FUN_100ce1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ce1d0(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1[0xa6] == 0) {
    pcVar1 = "host";
    uVar2 = 6;
  }
  else {
    pcVar1 = "proxy";
    uVar2 = 5;
  }
  FUN_100d8ba0(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0x151]);
  return uVar2;
}


/* END FUNCTION 0x100ce1d0 */

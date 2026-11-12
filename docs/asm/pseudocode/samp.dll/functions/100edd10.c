/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edd10
 * Name: FUN_100edd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100edd10(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined1 local_11;
  undefined1 local_10 [16];
  
  iVar1 = _sscanf(param_2,"%15[^?&/:]://%c",local_10,&local_11);
  return iVar1 == 2;
}


/* END FUNCTION 0x100edd10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406190
 * Name: FUN_00406190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00406190(undefined4 param_1,uint *param_2,int param_3)

{
  int in_EAX;
  byte *pbVar1;
  LPSTR lpsz;
  
  if (*param_2 < 0x1000000) {
    lpsz = (LPSTR)param_2[in_EAX];
  }
  else {
    pbVar1 = (byte *)FUN_00406170(param_1,(int)param_2);
    lpsz = (LPSTR)(uint)*pbVar1;
  }
  if (param_3 != 0) {
    CharLowerA(lpsz);
  }
  return;
}


/* END FUNCTION 0x00406190 */

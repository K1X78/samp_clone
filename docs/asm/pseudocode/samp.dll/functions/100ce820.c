/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce820
 * Name: FUN_100ce820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ce820(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x3f4);
  if ((iVar1 < 0) || (7 < iVar1)) {
    FUN_100d8ba0(param_2,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x3f8);
  if (((iVar2 != 0) && (iVar2 != 0x10000)) && (iVar2 >> 0x10 < iVar1)) {
    FUN_100d8ba0(param_2,"CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION");
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100ce820 */

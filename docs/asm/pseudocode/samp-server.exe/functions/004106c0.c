/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004106c0
 * Name: FUN_004106c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong __fastcall FUN_004106c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  longlong lVar3;
  
  iVar1 = *param_2;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      param_2 = param_2 + 1;
      if (*param_2 == unaff_ESI) {
        lVar3 = __allshl((byte)iVar2,0);
        return lVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


/* END FUNCTION 0x004106c0 */

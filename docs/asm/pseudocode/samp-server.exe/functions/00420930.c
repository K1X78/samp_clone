/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420930
 * Name: FUN_00420930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00420930(int param_1,short *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  pbVar1 = *(byte **)(param_1 + 4);
  iVar4 = 0;
  psVar5 = param_2 + 4;
  if (0 < *param_2) {
    while( true ) {
      if (*(byte **)psVar5 == (byte *)0x0) {
        pcVar2 = FUN_00412a70();
        *(char **)psVar5 = pcVar2;
      }
      else {
        iVar3 = FUN_00408450(*(byte **)psVar5,pbVar1);
        if (iVar3 != 0) {
          FUN_00418b00((undefined **)"%s %T cannot reference objects in database %s");
          return 1;
        }
      }
      iVar3 = FUN_0041a910(param_1,*(int *)(psVar5 + 8));
      if ((iVar3 != 0) || (iVar3 = FUN_004161c0(param_1,*(int *)(psVar5 + 0xe)), iVar3 != 0)) break;
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 0x1c;
      if (*param_2 <= iVar4) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00420930 */

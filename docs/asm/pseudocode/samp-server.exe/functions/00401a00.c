/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401a00
 * Name: FUN_00401a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401a00(int *param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  FUN_00401920(param_1,&local_4);
  iVar1 = local_4 + -1;
  iVar3 = 0;
  if (-1 < iVar1) {
    do {
      iVar2 = (iVar3 + iVar1) / 2;
      FUN_00401970(param_1,iVar2,param_3,&local_4);
      if (param_2 < local_4) {
        iVar1 = iVar2 + -1;
      }
      else {
        if (param_2 <= local_4) {
          return 0;
        }
        iVar3 = iVar2 + 1;
      }
    } while (iVar3 <= iVar1);
  }
  *param_3 = '\0';
  return 0x13;
}


/* END FUNCTION 0x00401a00 */

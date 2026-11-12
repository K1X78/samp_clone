/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403550
 * Name: FUN_00403550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00403550(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  byte local_c [12];
  
  local_10 = FUN_004031d0(param_1,param_2);
  if ((local_10 == 0) && (*param_1 < 0x1000000)) {
    iVar1 = *param_2;
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_00403420(local_c,&local_14,10,*param_1);
        param_1 = param_1 + 1;
        iVar2 = iVar2 + (local_14 - (int)local_c);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *param_2 = iVar2;
  }
  return local_10;
}


/* END FUNCTION 0x00403550 */

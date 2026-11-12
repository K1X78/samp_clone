/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004041b0
 * Name: FUN_004041b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004041b0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int *unaff_EDI;
  int *local_4;
  
  iVar2 = 0;
  local_4 = this;
  if (0 < unaff_EBX) {
    do {
      if (iVar2 == 0) {
        iVar1 = *unaff_EDI;
      }
      else {
        FUN_00403100(param_1,unaff_EDI[iVar2],(int *)&local_4);
        iVar1 = *local_4;
      }
      if (param_2 == iVar1) {
        return iVar1;
      }
      if (param_2 == -iVar1) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  return 0;
}


/* END FUNCTION 0x004041b0 */

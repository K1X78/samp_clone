/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407d30
 * Name: FUN_00407d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00407d30(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (DAT_004ed468 == param_2) {
      DAT_004ed468 = *(undefined4 *)(param_2 + 0xc);
      return;
    }
    if (DAT_004ed468 != 0) {
      piVar1 = (int *)(DAT_004ed468 + 0xc);
      iVar2 = *piVar1;
      iVar4 = DAT_004ed468;
      while ((iVar2 != 0 && (iVar3 = *piVar1, iVar3 != param_2))) {
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
        piVar1 = (int *)(iVar3 + 0xc);
      }
      if (*(int *)(iVar4 + 0xc) == param_2) {
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      }
    }
  }
  return;
}


/* END FUNCTION 0x00407d30 */

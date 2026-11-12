/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412450
 * Name: FUN_00412450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00412450(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0043a410();
  if (iVar1 == 0) {
    iVar2 = FUN_00407e10();
    FUN_00407e50(iVar2);
    FUN_00407d30(extraout_ECX,param_1);
    iVar1 = DAT_004ed468;
    if ((param_2 == 0) && (DAT_004ed468 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_004ed468 + 0xc);
      *(int *)(iVar1 + 0xc) = param_1;
      FUN_00407e90(iVar2);
      return 0;
    }
    *(int *)(param_1 + 0xc) = DAT_004ed468;
    DAT_004ed468 = param_1;
    FUN_00407e90(iVar2);
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x00412450 */

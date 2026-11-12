/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004251b0
 * Name: FUN_004251b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004251b0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBX + 4)) {
    local_4 = 0;
    do {
      if (iVar3 != 0) {
        return iVar3;
      }
      if (((iVar4 == param_1) || (param_1 == 10)) &&
         (iVar1 = *(int *)(*(int *)(unaff_EBX + 8) + 4 + local_4), iVar1 != 0)) {
        bVar2 = FUN_0040d070(iVar1);
        if (CONCAT31(extraout_var,bVar2) == 0) {
          FUN_0040c2c0();
          iVar3 = FUN_0040d020();
          iVar3 = FUN_00423800(iVar3);
          FUN_0040c340();
        }
        else {
          iVar3 = 6;
        }
      }
      iVar4 = iVar4 + 1;
      local_4 = local_4 + 0x10;
    } while (iVar4 < *(int *)(unaff_EBX + 4));
  }
  return iVar3;
}


/* END FUNCTION 0x004251b0 */

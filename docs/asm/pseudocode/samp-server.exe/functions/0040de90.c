/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040de90
 * Name: FUN_0040de90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040de90(int param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  
  iVar1 = *unaff_EBX;
  uVar2 = FUN_0040de60((int)unaff_EBX);
  if ((param_1 < CONCAT22(extraout_var,uVar2)) && (-1 < param_1)) {
    FUN_00407e50(*(int *)(iVar1 + 0x44));
    uVar3 = (*(code *)param_2)(unaff_EBX[10] +
                               (CONCAT22(extraout_var,uVar2) * param_3 + param_1) * 0x28);
    if (*(char *)(iVar1 + 0x1e) != '\0') {
      *(undefined1 *)(iVar1 + 0x1e) = 0;
      uVar3 = 0;
    }
    FUN_00407e90(*(int *)(iVar1 + 0x44));
    return uVar3;
  }
  return extraout_ECX;
}


/* END FUNCTION 0x0040de90 */

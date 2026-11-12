/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d170
 * Name: FUN_0040d170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040d170(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBX;
  int *piVar4;
  int local_40 [6];
  int local_28;
  undefined2 local_1c;
  undefined4 uStack_c;
  
  uVar2 = 0;
  if ((param_2 != 0) && (pcVar1 = *(code **)(param_2 + 0x14), pcVar1 != (code *)0x0)) {
    piVar4 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_28 = unaff_EBX[4];
    local_1c = 1;
    local_40[0] = param_2;
    (*pcVar1)(local_40);
    FUN_00408130(unaff_EBX[4]);
    piVar4 = local_40 + 2;
    for (iVar3 = 10; uVar2 = uStack_c, iVar3 != 0; iVar3 = iVar3 + -1) {
      *unaff_EBX = *piVar4;
      piVar4 = piVar4 + 1;
      unaff_EBX = unaff_EBX + 1;
    }
  }
  return uVar2;
}


/* END FUNCTION 0x0040d170 */

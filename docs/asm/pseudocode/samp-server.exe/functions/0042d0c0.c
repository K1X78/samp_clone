/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d0c0
 * Name: FUN_0042d0c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042d0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  char *local_4;
  
  iVar4 = *unaff_EBX;
  iVar2 = FUN_0040fc30(iVar4);
  iVar3 = FUN_00410210();
  uVar1 = *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar4 + 8));
  uVar6 = 0x10;
  if (iVar2 == 1) {
    local_4 = "sqlite_temp_master";
    uVar6 = 0xe;
  }
  else {
    local_4 = "sqlite_master";
  }
  iVar4 = FUN_0041ab60(uVar6,*param_1,*(undefined4 *)(iVar3 + 4),uVar1);
  if (iVar4 == 0) {
    iVar4 = FUN_0041ab60(9,local_4,0,uVar1);
    if (iVar4 == 0) {
      piVar5 = (int *)FUN_0041c720();
      if (piVar5 != (int *)0x0) {
        FUN_0042cdb0((byte)iVar2,0);
        FUN_00420b90();
        FUN_00414ef0(9,0x4b36dc);
        FUN_00415110(0,(char *)*param_1,piVar5);
        FUN_00415110(-2,"trigger",piVar5);
        FUN_004164c0(iVar2);
        FUN_00414e70(0,0x2b);
        FUN_004197c0(0,iVar2,0x67,(char *)*param_1,0);
        if (unaff_EBX[0x12] < 3) {
          unaff_EBX[0x12] = 3;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x0042d0c0 */

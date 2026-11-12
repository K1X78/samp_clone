/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f2a0
 * Name: FUN_0042f2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f2a0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  void *this;
  byte *extraout_EDX;
  uint uVar7;
  
  uVar7 = 0;
  iVar2 = FUN_0040de20((int)param_1);
  iVar3 = FUN_0041ffb0();
  pbVar4 = (byte *)FUN_0041ffb0();
  iVar5 = FUN_0041ff70();
  if (*(int *)(iVar2 + 0x68) < iVar5) {
    FUN_0042e970((int)param_1,"LIKE or GLOB pattern too complex",(void *)0xffffffff);
    return;
  }
  if (param_2 == 3) {
    pbVar6 = (byte *)FUN_0041ffb0();
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    iVar2 = FUN_004082b0();
    if (iVar2 != 1) {
      FUN_0042e970((int)param_1,"ESCAPE expression must be a single character",(void *)0xffffffff);
      return;
    }
    uVar7 = FUN_00408240(extraout_ECX,pbVar6);
  }
  if ((pbVar4 != (byte *)0x0) && (iVar3 != 0)) {
    pbVar6 = (byte *)FUN_0040de10(param_1);
    bVar1 = FUN_0040f4b0(this,extraout_EDX,pbVar4,pbVar6,uVar7);
    FUN_0040ddb0(param_1,CONCAT31(extraout_var,bVar1));
  }
  return;
}


/* END FUNCTION 0x0042f2a0 */

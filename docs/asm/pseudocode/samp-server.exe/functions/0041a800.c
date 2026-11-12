/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a800
 * Name: FUN_0041a800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041a800(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *in_EAX;
  iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x1c);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x44) == iVar2) {
    return 0;
  }
  for (iVar3 = FUN_004101a0(param_1); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    if (*(int *)(iVar3 + 0x14) == iVar2) {
      uVar4 = FUN_0041a790(iVar1);
    }
  }
  return uVar4;
}


/* END FUNCTION 0x0041a800 */

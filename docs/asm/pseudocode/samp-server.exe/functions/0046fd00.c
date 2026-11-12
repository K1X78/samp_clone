/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fd00
 * Name: FUN_0046fd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0046fd00(int *param_1,int param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint *extraout_EDX;
  undefined4 *puVar3;
  
  puVar3 = &DAT_004fb400;
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = param_3 * 4;
  param_3 = param_3 + 1;
  pbVar1 = (byte *)FUN_0046fca0(param_1,*(int *)(param_2 + iVar2));
  iVar2 = FUN_0046d680((byte *)&DAT_004fb400,0xfff,pbVar1,param_1,extraout_EDX,&param_3);
  *param_4 = iVar2;
  return &DAT_004fb400;
}


/* END FUNCTION 0x0046fd00 */

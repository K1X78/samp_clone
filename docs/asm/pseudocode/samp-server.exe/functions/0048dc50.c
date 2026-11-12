/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048dc50
 * Name: FUN_0048dc50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048dc50(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x98;
  FUN_0048bf20(1);
  FUN_0048bf20(0);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_004bf16c + *(int *)(param_1 + 0x44) * 4);
  FUN_0048c490(param_2,iVar1,(uint)(*(int *)(param_1 + 100) == 0));
  FUN_0048c110(iVar1,param_1 + 0x32768,0x3f);
  FUN_0048bed0();
  FUN_0048c150(iVar1,param_1 + 0x32a4c,0xf);
  return;
}


/* END FUNCTION 0x0048dc50 */

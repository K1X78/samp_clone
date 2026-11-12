/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ad20
 * Name: FUN_0041ad20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041ad20(char *param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  byte *extraout_ECX;
  int unaff_ESI;
  int iVar3;
  
  iVar1 = *(int *)(unaff_ESI + 8);
  iVar3 = 0;
  FUN_00408380(param_1);
  piVar2 = (int *)FUN_00412f40((void *)(*(int *)(in_EAX * 0x10 + iVar1 + 0xc) + 4),extraout_ECX,
                               iVar3);
  FUN_0041aca0(piVar2);
  *(uint *)(unaff_ESI + 0xc) = *(uint *)(unaff_ESI + 0xc) | 0x200;
  return;
}


/* END FUNCTION 0x0041ad20 */

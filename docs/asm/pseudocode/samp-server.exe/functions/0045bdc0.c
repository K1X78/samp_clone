/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045bdc0
 * Name: FUN_0045bdc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0045bdc0(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_2;
  piVar3 = (int *)FUN_0045b2f0((void *)(iVar2 + 8),0);
  uVar1 = *param_1;
  if (uVar1 < *(ushort *)(*piVar3 + 0x14)) {
    return 0xffffffff;
  }
  piVar3 = (int *)FUN_0045b2f0((void *)(iVar2 + 8),0);
  return (uint)(uVar1 != *(ushort *)(*piVar3 + 0x14));
}


/* END FUNCTION 0x0045bdc0 */

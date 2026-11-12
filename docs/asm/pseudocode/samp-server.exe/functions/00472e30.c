/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472e30
 * Name: FUN_00472e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472e30(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_2 + 1) < 1000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 1) * 4),
     iVar1 != 0)) {
    FUN_00403100(param_1,param_2[2],(int *)&param_2);
    *param_2 = *(undefined4 *)(iVar1 + 0x2d21);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00472e30 */

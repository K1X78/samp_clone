/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496b70
 * Name: FUN_00496b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00496b70(byte param_1,undefined4 param_2,char *param_3,uint param_4,ushort param_5)

{
  int iVar1;
  
  if ((((DAT_004fc438 != 0) && (*(int *)(DAT_004fc438 + 8) != 0)) && (param_5 < 1000)) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)param_5 * 4), iVar1 != 0)) {
    FUN_00488360(*(void **)(iVar1 + 0x30cf),param_1,param_2,param_3,param_4);
  }
  return;
}


/* END FUNCTION 0x00496b70 */

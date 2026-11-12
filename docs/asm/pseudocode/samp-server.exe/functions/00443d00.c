/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00443d00
 * Name: FUN_00443d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00443d00(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((((param_2 != 0) && (iVar1 = *param_1, (*(byte *)(param_2 + 6) & 0x20) == 0)) &&
      (FUN_00443cd0(param_2), param_1[0x10] == 0)) &&
     (((*(char *)(iVar1 + 0x1e) == '\0' &&
       (FUN_00426e50(param_1,param_2,param_3), param_1[0x10] == 0)) &&
      (*(char *)(iVar1 + 0x1e) == '\0')))) {
    FUN_004326a0(param_2);
    return;
  }
  return;
}


/* END FUNCTION 0x00443d00 */

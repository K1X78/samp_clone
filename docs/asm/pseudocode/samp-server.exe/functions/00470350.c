/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470350
 * Name: FUN_00470350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470350(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (puVar1 = *(undefined4 **)
                (*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4),
     puVar1 != (undefined4 *)0x0)) {
    FUN_00489790(puVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00470350 */

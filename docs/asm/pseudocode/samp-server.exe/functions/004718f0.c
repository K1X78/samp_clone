/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004718f0
 * Name: FUN_004718f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004718f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  if ((*(ushort *)(param_2 + 1) < 2000) &&
     (puVar1 = *(undefined4 **)
                (*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 1) * 4),
     puVar1 != (undefined4 *)0x0)) {
    FUN_00403100(param_1,param_2[2],(int *)&param_2);
    *param_2 = *puVar1;
    FUN_00403100(param_1,puVar2[3],(int *)&param_2);
    *param_2 = puVar1[1];
    FUN_00403100(param_1,puVar2[4],(int *)&param_2);
    *param_2 = puVar1[2];
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004718f0 */

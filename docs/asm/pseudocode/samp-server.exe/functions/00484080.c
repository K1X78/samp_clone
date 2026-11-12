/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484080
 * Name: FUN_00484080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484080(int param_1)

{
  if (*(int *)(param_1 + 0x2d39) != *(int *)(param_1 + 0x2d35)) {
    if ((void *)*DAT_004fc438 != (void *)0x0) {
      FUN_0046e530((void *)*DAT_004fc438,(uint)*(ushort *)(param_1 + 0x2d53),
                   *(int *)(param_1 + 0x2d35),*(int *)(param_1 + 0x2d39));
    }
    if ((void *)DAT_004fc438[1] != (void *)0x0) {
      FUN_0046b830((void *)DAT_004fc438[1],(uint)*(ushort *)(param_1 + 0x2d53),
                   *(undefined4 *)(param_1 + 0x2d35),*(int *)(param_1 + 0x2d39));
    }
    *(undefined4 *)(param_1 + 0x2d39) = *(undefined4 *)(param_1 + 0x2d35);
  }
  return;
}


/* END FUNCTION 0x00484080 */

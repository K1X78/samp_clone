/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad6d0
 * Name: FUN_100ad6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ad6d0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 4)) {
    *(undefined4 *)(param_1 + 0x2d2) = 1;
    *(int *)(param_1 + 0x2d6) = param_2;
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      FUN_100ace50(s_DANCE_LOOP_10154df0 + param_2 * 0x10,&DAT_10154db0 + param_2 * 0x10,0x41800000,
                   1,0,0,0,0xffffffff);
    }
  }
  return;
}


/* END FUNCTION 0x100ad6d0 */

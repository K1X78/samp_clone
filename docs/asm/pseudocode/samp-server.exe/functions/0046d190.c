/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d190
 * Name: FUN_0046d190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0046d190(void *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)param_1 + uVar1 * 4) != 0) {
      FUN_0046acc0(param_1,uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x10);
  *(undefined4 *)((int)param_1 + 0x1030) = 0;
  return;
}


/* END FUNCTION 0x0046d190 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f2d0
 * Name: FUN_0040f2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040f2d0(undefined4 param_1,short *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((param_2 != (short *)0x0) && (param_2 != (short *)0xfffffff8)) {
    iVar2 = *param_2 + -1;
    if (0 < iVar2) {
      puVar1 = (undefined1 *)(iVar2 * 0x38 + 0x1d + (int)param_2);
      do {
        *puVar1 = puVar1[-0x38];
        puVar1 = puVar1 + -0x38;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined1 *)((int)param_2 + 0x1d) = 0;
  }
  return;
}


/* END FUNCTION 0x0040f2d0 */

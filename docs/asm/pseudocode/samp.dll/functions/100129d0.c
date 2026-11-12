/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100129d0
 * Name: FUN_100129d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100129d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < *param_1) {
    piVar1 = param_1 + 0x835;
    do {
      if (piVar1[-0x834] != 0) {
        FUN_100a7a10();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 <= *param_1);
  }
  return;
}


/* END FUNCTION 0x100129d0 */

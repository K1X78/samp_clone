/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012a10
 * Name: FUN_10012a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10012a10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < *param_1) {
    piVar1 = param_1 + 0x835;
    do {
      if ((piVar1[-0x834] != 0) && (*(int *)(*piVar1 + 0x118b) != 0)) {
        FUN_100a9ad0();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 <= *param_1);
  }
  return;
}


/* END FUNCTION 0x10012a10 */

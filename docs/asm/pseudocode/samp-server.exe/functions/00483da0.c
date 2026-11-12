/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483da0
 * Name: FUN_00483da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00483da0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x10) + 0x1c000);
  iVar2 = 0;
  if (-1 < iVar1) {
    do {
      if ((iVar2 < 0x1000) && (*(char *)(iVar2 + 0x18dd + (int)param_1) != '\0')) {
        FUN_00483d60(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00483da0 */

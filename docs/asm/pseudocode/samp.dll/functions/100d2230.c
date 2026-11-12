/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2230
 * Name: FUN_100d2230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100d228c) */
/* WARNING: Removing unreachable block (ram,0x100d2291) */
/* WARNING: Removing unreachable block (ram,0x100d22da) */

int FUN_100d2230(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_100d2100();
    if (iVar1 != 0) break;
    *(undefined4 *)(unaff_ESI + 0x28c) = 0;
    (*(code *)PTR__free_101554bc)(0);
    *(undefined4 *)(unaff_ESI + 0x290) = 0;
    param_1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}


/* END FUNCTION 0x100d2230 */

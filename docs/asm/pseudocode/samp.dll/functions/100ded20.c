/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ded20
 * Name: FUN_100ded20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ded20(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EBX;
  int *unaff_EDI;
  
  if (*unaff_EDI == 2) {
    (*(code *)PTR__free_101554bc)(*unaff_EBX);
    *unaff_EBX = 0;
  }
  if (*unaff_EDI != 0) {
    iVar1 = FUN_100f0e30();
    if ((iVar1 != 0) && (in_EAX == 0)) {
      in_EAX = FUN_100dece0();
    }
    *unaff_EDI = 0;
  }
  return in_EAX;
}


/* END FUNCTION 0x100ded20 */

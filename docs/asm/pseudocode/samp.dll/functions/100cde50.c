/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cde50
 * Name: FUN_100cde50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cde50(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  if ((LPCRITICAL_SECTION)*in_EAX != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*in_EAX);
    (*(code *)PTR__free_101554bc)(*in_EAX);
  }
  (*(code *)PTR__free_101554bc)(in_EAX[2]);
  if (in_EAX[5] != 0) {
    FUN_100e07d0(in_EAX[5]);
  }
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_EAX = 0;
    in_EAX = in_EAX + 1;
  }
  return;
}


/* END FUNCTION 0x100cde50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1c10
 * Name: FUN_100f1c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f1c10(void)

{
  int iVar1;
  undefined1 *in_EAX;
  int iVar2;
  undefined1 *unaff_EBX;
  
  iVar2 = 0;
  if (((uint)((int)unaff_EBX - (int)in_EAX) < 0x55555555) &&
     (iVar2 = (*(code *)PTR__malloc_101554b8)(((int)unaff_EBX - (int)in_EAX) * 3 + 1), iVar1 = iVar2
     , iVar2 != 0)) {
    for (; in_EAX < unaff_EBX; in_EAX = in_EAX + 1) {
      FUN_100cc780(iVar1,4,"%02x:",*in_EAX);
      iVar1 = iVar1 + 3;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x100f1c10 */

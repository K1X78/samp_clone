/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dcb80
 * Name: FUN_100dcb80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dcb80(void)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  _Str = (char *)(*(code *)PTR___strdup_101554c4)();
  if (_Str == (char *)0x0) {
    return 0;
  }
  pcVar1 = _strrchr(_Str,0x2f);
  pcVar2 = _strrchr(_Str,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = _Str;
    if (pcVar2 == (char *)0x0) goto LAB_100dcbc8;
  }
  else {
    if (pcVar2 == (char *)0x0) {
      pcVar1 = pcVar1 + 1;
      goto LAB_100dcbc8;
    }
    if (pcVar2 < pcVar1) {
      pcVar2 = pcVar1;
    }
  }
  pcVar1 = pcVar2 + 1;
LAB_100dcbc8:
  uVar3 = (*(code *)PTR___strdup_101554c4)(pcVar1);
  (*(code *)PTR__free_101554bc)(_Str);
  return uVar3;
}


/* END FUNCTION 0x100dcb80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fe2e5
 * Name: __getenv_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __getenv_lk(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_102ae6ac == 0) {
    return 0;
  }
  if (((DAT_102acd64 != (int *)0x0) ||
      (((DAT_102acd6c != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_102acd64 != (int *)0x0)))) && (piVar3 = DAT_102acd64, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100fe2e5 */

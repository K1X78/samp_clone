/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109598
 * Name: __setargv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl __setargv(void)

{
  void *pvVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (DAT_102ae6b8 == 0) {
    ___initmbctable();
  }
  DAT_102ad20c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_102ad108,0x104);
  _DAT_102acd74 = &DAT_102ad108;
  parse_cmdline(0,&local_8);
  pvVar1 = _malloc(in_ECX + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(pvVar1,&local_8);
    _DAT_102acd58 = local_8 + -1;
    iVar2 = 0;
    _DAT_102acd5c = pvVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x10109598 */

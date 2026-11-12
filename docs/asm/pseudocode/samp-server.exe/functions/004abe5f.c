/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004abe5f
 * Name: __setargv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (DAT_0051ca50 == 0) {
    ___initmbctable();
  }
  DAT_0051c5b4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_0051c4b0,0x104);
  _DAT_0051c220 = &DAT_0051c4b0;
  parse_cmdline((void *)0x0,(undefined4 *)0x0,&local_8);
  iVar2 = local_8;
  puVar1 = _malloc(in_ECX + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(puVar1 + iVar2,puVar1,&local_8);
    DAT_0051c204 = local_8 + -1;
    iVar2 = 0;
    DAT_0051c208 = puVar1;
  }
  return iVar2;
}


/* END FUNCTION 0x004abe5f */

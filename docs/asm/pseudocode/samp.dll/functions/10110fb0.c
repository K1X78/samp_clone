/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110fb0
 * Name: FUN_10110fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10110fb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c [2];
  
  puVar2 = DAT_102ad2f0;
  if (DAT_102ad2f0 == (undefined4 *)0x0) {
    DAT_102ad2f0 = &DAT_102ad2c8;
    _memset(&DAT_102ad2c8,0,0x28);
    DAT_102ad2c8 = GetCurrentProcess();
    DAT_102ad2cc = LoadLibraryA(s_imagehlp_dll_101568d3 + 1);
    if (DAT_102ad2cc == (HMODULE)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      DAT_102ad2d0 = GetProcAddress(DAT_102ad2cc,s_ImagehlpApiVersionEx_101568e4);
      DAT_102ad2d4 = GetProcAddress(DAT_102ad2cc,s_SymInitialize_101568fc);
      DAT_102ad2d8 = GetProcAddress(DAT_102ad2cc,s_SymSetOptions_1015690c);
      DAT_102ad2dc = GetProcAddress(DAT_102ad2cc,s_SymGetOptions_1015691c);
      _DAT_102ad2e0 = GetProcAddress(DAT_102ad2cc,s_SymLoadModule_1015692c);
      _DAT_102ad2e4 = GetProcAddress(DAT_102ad2cc,s_SymGetModuleInfo_1015693c);
      _DAT_102ad2e8 = GetProcAddress(DAT_102ad2cc,s_SymGetSymFromName_10156950);
      _DAT_102ad2ec = GetProcAddress(DAT_102ad2cc,s_BindImage_10156964);
      _memset(local_c,0,8);
      local_c[0] = CONCAT22(local_c[0]._2_2_,7);
      if (DAT_102ad2d0 != (FARPROC)0x0) {
        (*DAT_102ad2d0)(local_c);
      }
      if ((DAT_102ad2d0 == (FARPROC)0x0) || ((local_c[0] & 0xffff) < 7)) {
        FreeLibrary(DAT_102ad2cc);
        DAT_102ad2cc = (HMODULE)0x0;
        puVar2 = (undefined4 *)0x0;
      }
      else {
        if (DAT_102ad2d4 != (FARPROC)0x0) {
          (*DAT_102ad2d4)(DAT_102ad2c8,0,0);
        }
        puVar2 = DAT_102ad2f0;
        if ((DAT_102ad2dc != (FARPROC)0x0) && (DAT_102ad2d8 != (FARPROC)0x0)) {
          uVar1 = (*DAT_102ad2dc)();
          (*DAT_102ad2d8)(uVar1 & 7);
          puVar2 = DAT_102ad2f0;
        }
      }
    }
  }
  return puVar2;
}


/* END FUNCTION 0x10110fb0 */

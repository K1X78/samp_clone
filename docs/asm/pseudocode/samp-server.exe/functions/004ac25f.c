/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac25f
 * Name: __get_osfhandle
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_0051c938) &&
     (piVar1 = (intptr_t *)((&DAT_0051c940)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  piVar2 = FUN_004a5f9b();
  *piVar2 = 9;
  puVar3 = FUN_004a5fa4();
  *puVar3 = 0;
  return -1;
}


/* END FUNCTION 0x004ac25f */

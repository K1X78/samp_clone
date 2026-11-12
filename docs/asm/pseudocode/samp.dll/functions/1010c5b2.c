/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c5b2
 * Name: __get_osfhandle
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  undefined4 *puVar2;
  
  if (((uint)_FileHandle < DAT_102ad548) &&
     (piVar1 = (intptr_t *)((&DAT_102ad560)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  puVar2 = (undefined4 *)FUN_100fdc77();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_100fdc80();
  *puVar2 = 0;
  return -1;
}


/* END FUNCTION 0x1010c5b2 */

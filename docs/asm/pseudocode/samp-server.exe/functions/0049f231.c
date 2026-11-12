/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f231
 * Name: __fflush_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __commit(param_1->_file);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* END FUNCTION 0x0049f231 */

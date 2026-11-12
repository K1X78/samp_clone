/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111c10
 * Name: _IsEqualGUID
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool _IsEqualGUID(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = _memcmp(param_1,param_2,0x10);
  return iVar1 == 0;
}


/* END FUNCTION 0x10111c10 */

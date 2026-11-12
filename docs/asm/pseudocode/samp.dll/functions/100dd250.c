/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd250
 * Name: FUN_100dd250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


size_t FUN_100dd250(void *param_1,size_t param_2,size_t param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  
  if (*(int *)(param_4 + 0x24) == 0) {
    iVar1 = FUN_100f9cc9(*(undefined4 *)(param_4 + 0x10),&DAT_10118e1c);
    *(int *)(param_4 + 0x24) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  sVar2 = _fread(param_1,param_2,param_3,*(FILE **)(param_4 + 0x24));
  return sVar2;
}


/* END FUNCTION 0x100dd250 */

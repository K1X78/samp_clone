/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd2b0
 * Name: FUN_100cd2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cd2b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_100cc840(&local_10,FUN_100cc7a0,param_1,param_2);
  if ((iVar1 != -1) && (local_4 == 0)) {
    if (local_8 != 0) {
      *(undefined1 *)(local_c + local_10) = 0;
      return local_10;
    }
    iVar1 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    return iVar1;
  }
  if (local_8 != 0) {
    (*(code *)PTR__free_101554bc)(local_10);
  }
  return 0;
}


/* END FUNCTION 0x100cd2b0 */

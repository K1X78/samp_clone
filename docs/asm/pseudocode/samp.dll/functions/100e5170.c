/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5170
 * Name: FUN_100e5170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100e5170(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 0xe8);
  if ((*(int *)(iVar1 + 0x51c) == 0) || (iVar2 < 400)) {
    return 0;
  }
  if (iVar2 == 0x191) {
    if (param_2[0xa8] == 0) {
      return 1;
    }
  }
  else if ((iVar2 != 0x197) || (param_2[0xa9] == 0)) {
    return 1;
  }
  return *(undefined4 *)(iVar1 + 0x498c);
}


/* END FUNCTION 0x100e5170 */

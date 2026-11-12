/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d710
 * Name: FUN_1002d710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1002d710(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  cVar1 = FUN_1002c7d0(param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    thunk_FUN_1002d1c0(*(undefined4 *)(param_1 + 0xc));
    return 1;
  }
  uVar2 = FUN_1002cf30(uVar2,&param_2);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    thunk_FUN_1002d1c0(uVar2);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1002d710 */

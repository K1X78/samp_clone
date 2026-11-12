/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089890
 * Name: FUN_10089890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10089890(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x14a) <= param_2) {
    iVar2 = param_2 - *(uint *)(param_1 + 0x14a);
    param_2 = 0xffffffff;
    iVar2 = iVar2 + 1;
    do {
      FUN_1007c2b0(&param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_2 = FUN_100897d0(param_3);
  FUN_1007bac0(uVar1,&param_2);
  return 0;
}


/* END FUNCTION 0x10089890 */

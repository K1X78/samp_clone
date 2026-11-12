/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101122d0
 * Name: FUN_101122d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_101122d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_c;
  code *local_8;
  
  if ((*(char *)(param_4 + 1) == '\x15') || (*(char *)(param_4 + 1) == '%')) {
    **(undefined4 **)(param_1 + 8) = **(undefined4 **)(param_4 + 2);
  }
  else if (((*(byte *)(param_4 + 1) & 0x38) == 0x10) ||
          ((((*(byte *)(param_4 + 1) & 0x38) == 0x18 || ((*(byte *)(param_4 + 1) & 0x38) == 0x20))
           || ((*(byte *)(param_4 + 1) & 0x38) == 0x28)))) {
    **(undefined4 **)(param_1 + 8) = 0xffffffff;
  }
  local_c = 0x52ff;
  local_8 = FUN_10111df0;
  FUN_10111df0(&local_c,param_3,param_4);
  return;
}


/* END FUNCTION 0x101122d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450820
 * Name: FUN_00450820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00450820(undefined4 *param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    in_EAX = FUN_0044eec0(&param_3,&DAT_004cac3c);
    if ((char)in_EAX == '\0') {
      uVar1 = FUN_0048f9e0(param_1,param_2,param_3,param_4);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x00450820 */

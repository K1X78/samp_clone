/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2790
 * Name: FUN_100b2790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b2790(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_c8 [4];
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  char local_84 [132];
  
  if (param_3 == '\0') {
    builtin_strncpy(local_c8,"mode",4);
    local_c4._0_1_ = 'l';
    local_c4._1_1_ = 's';
    local_c4._2_1_ = '\\';
    local_c4._3_1_ = 't';
    local_c0 = 0x6478;
    local_be = 0;
  }
  else {
    builtin_strncpy(local_c8,"SAMP",4);
    local_c4._0_1_ = '\\';
    local_c4._1_1_ = '\0';
  }
  iVar1 = FUN_100b3480(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_100b34a0(param_1);
    _sprintf(local_84,"%s\\%s.txd",local_c8,param_2);
    iVar1 = FUN_100b5900(local_84);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_100b34c0(uVar2,local_84);
    FUN_100b34f0(uVar2);
  }
  return 1;
}


/* END FUNCTION 0x100b2790 */

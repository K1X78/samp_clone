/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099000
 * Name: FUN_10099000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10099000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10,int param_11,undefined4 param_12)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  char local_20 [32];
  
  local_38 = param_2;
  local_30 = param_4;
  local_34 = param_3;
  local_28 = param_6;
  local_2c = param_5;
  local_23 = param_8;
  local_24 = param_7;
  local_21 = param_10;
  pcVar1 = local_20;
  local_22 = param_9;
  iVar2 = 0x20;
  param_11 = param_11 - (int)pcVar1;
  do {
    if (pcVar1[param_11] == '\0') {
      if (iVar2 != 0) goto LAB_10099074;
      break;
    }
    *pcVar1 = pcVar1[param_11];
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = pcVar1 + -1;
LAB_10099074:
  *pcVar1 = '\0';
  FUN_10098230(param_1,&local_38,param_12);
  return;
}


/* END FUNCTION 0x10099000 */

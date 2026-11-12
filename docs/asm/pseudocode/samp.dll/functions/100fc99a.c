/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fc99a
 * Name: FID_conflict_vswprintf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FID_conflict_vswprintf(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  FILE local_24;
  
  local_24._base = param_1;
  local_24._ptr = param_1;
  local_24._cnt = param_2 * 2;
  local_24._flag = 0x42;
  uVar1 = __woutput(&local_24,param_3,param_4);
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = '\0';
    local_24._ptr = local_24._ptr + 1;
  }
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = '\0';
  }
  return uVar1;
}


/* END FUNCTION 0x100fc99a */

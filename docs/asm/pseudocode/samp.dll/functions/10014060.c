/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014060
 * Name: FUN_10014060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10014060(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10113386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = param_3;
  local_4 = 0;
  param_1[3] = 0;
  *param_1 = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_1000b490(param_2,(int)pcVar2 - (int)(param_2 + 1));
  pvVar3 = operator_new(0x1fd);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar3 == (void *)0x0) {
    param_1[2] = 0;
  }
  else {
    uVar4 = FUN_10016250();
    param_1[2] = uVar4;
  }
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10014060 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100255b0
 * Name: FUN_100255b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100255b0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_a18;
  undefined4 local_a14 [386];
  undefined1 local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011432b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10026220();
  local_4 = 0;
  FUN_1001f530(&local_a18,0x20,1);
  puVar4 = local_40c;
  iVar3 = 0x100;
  do {
    FUN_1001f530(puVar4,0x20,1);
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1001f440();
  cVar1 = FUN_1001f470(local_a14,0x20,1);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_10026a60();
    ExceptionList = pvStack_c;
    return 0;
  }
  pvVar2 = operator_new(local_a18);
  *param_2 = pvVar2;
  FUN_10026a80(local_40c);
  FUN_10026230(param_1,local_a14[0],local_a18,*param_2);
  local_4 = 0xffffffff;
  FUN_10026a60();
  ExceptionList = pvStack_c;
  return local_a18;
}


/* END FUNCTION 0x100255b0 */

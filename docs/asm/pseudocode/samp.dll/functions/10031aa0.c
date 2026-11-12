/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031aa0
 * Name: FUN_10031aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10031aa0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_12c;
  undefined2 local_128 [2];
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  FUN_1001f7b0(8);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f7b0(8);
  FUN_1001f470(&local_12c,0x20,1);
  cVar1 = FUN_1001f470(local_128,0x10,1);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  else {
    puVar2 = operator_new(0x24);
    *(undefined4 *)((int)puVar2 + 5) = DAT_1013c708;
    *(undefined2 *)((int)puVar2 + 9) = DAT_1013c70c;
    *(undefined4 *)((int)puVar2 + 0xf) = *(undefined4 *)(param_2 + 2);
    *(undefined2 *)((int)puVar2 + 0x13) = *(undefined2 *)(param_2 + 6);
    *(undefined4 *)((int)puVar2 + 0x1d) = local_12c;
    *(undefined2 *)((int)puVar2 + 0x21) = local_128[0];
    *(undefined4 *)((int)puVar2 + 0x15) = 0;
    *(undefined4 *)((int)puVar2 + 0x19) = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = local_124[0];
    *(undefined1 *)((int)puVar2 + 0x23) = 0;
    iVar3 = FUN_1002e2b0();
    *(int *)((int)puVar2 + 0xb) = iVar3 + 30000;
    FUN_100314b0(puVar2);
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10031aa0 */

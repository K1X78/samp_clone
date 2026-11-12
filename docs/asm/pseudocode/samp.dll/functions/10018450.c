/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018450
 * Name: FUN_10018450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018450(undefined4 *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  char local_12d;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101134bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_12d = '\0';
  FUN_1001f470(&local_12d,8,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  iVar3 = FUN_10001010();
  if (iVar3 != 0) {
    iVar3 = FUN_100aba90();
    if (iVar3 != 0) {
      uVar4 = FUN_100abc20();
      uVar2 = FUN_1001e650(uVar4);
      if ((((uVar2 != 0xffff) && (uVar2 < 2000)) &&
          (*(int *)(iVar1 + 0x3074 + (uint)uVar2 * 4) != 0)) &&
         (*(int *)(iVar1 + 0x1134 + (uint)uVar2 * 4) != 0)) {
        if (local_12d == '\0') {
          FUN_1009eb50(local_12c,local_128,local_124[0]);
        }
        else if (local_12d == '\x01') {
          FUN_1009eca0(local_12c,local_128,local_124[0]);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018450 */

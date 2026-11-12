/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e230
 * Name: FUN_1003e230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003e230(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint local_12c;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011506b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f220(0xf);
  local_4 = 0;
  local_128[0] = 0x22;
  FUN_1001faa0(local_128,8,1);
  local_12c = *(uint *)(param_1 + 1);
  FUN_1001faa0(&local_12c,0x20,1);
  local_12c = (uint)*(ushort *)(param_1 + 5);
  uVar2 = 0;
  FUN_1001faa0(&local_12c,0x10,1);
  local_12c = FUN_1003c1f0(*(undefined4 *)(param_1 + 1),CONCAT22(uVar2,*(undefined2 *)(param_1 + 5))
                           ,1);
  FUN_1001faa0(&local_12c,0x10,1);
  local_12c = 0;
  FUN_1001faa0(&local_12c,0x20,1);
  local_124 = local_114;
  uVar1 = FUN_1002e2b0();
  FUN_1003c410(local_124,local_120,0,8,0,*(undefined4 *)(param_1 + 1),*(undefined2 *)(param_1 + 5),0
               ,0,uVar1,0);
  *(char *)(param_1 + 0x861) = param_3;
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x851) = *param_2;
    *(undefined4 *)(param_1 + 0x855) = param_2[1];
    *(undefined4 *)(param_1 + 0x859) = param_2[2];
    *(undefined4 *)(param_1 + 0x85d) = param_2[3];
    *(undefined4 *)(param_1 + 0xc62) = 7;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003e230 */

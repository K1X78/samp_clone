/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10061c40
 * Name: FUN_10061c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x10061cc7) */

int FUN_10061c40(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000b3a0(param_2,0,0xffffffff);
  local_4 = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_10061ad0(param_3,(int)pcVar2 - (int)(param_3 + 1));
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1000b3a0(uVar3,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10061c40 */

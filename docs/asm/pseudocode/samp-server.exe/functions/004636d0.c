/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004636d0
 * Name: FUN_004636d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004636d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1368;
  local_c = ExceptionList;
  local_4 = 0;
  uVar4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0045b300((int)param_1);
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_00462ee0(param_1,uVar4);
      if (*(char *)(iVar1 + 4) != '\0') {
        puVar2 = (undefined4 *)FUN_00462ee0(param_1,uVar4);
        _free((void *)*puVar2);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_0045b300((int)param_1);
    } while (uVar4 < uVar3);
  }
  local_4 = 0xffffffff;
  FUN_00463670(param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004636d0 */

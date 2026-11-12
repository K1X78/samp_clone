/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ff50
 * Name: FUN_1009ff50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1009ff50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101165bb;
  local_c = ExceptionList;
  uVar3 = 2;
  do {
    if ((&DAT_1018e1d8)[uVar3] != 1) {
      if ((char)uVar3 == '\0') {
        return 0;
      }
      ExceptionList = &local_c;
      pvVar1 = operator_new(0x32d);
      iVar4 = 0;
      local_4 = 0;
      if (pvVar1 != (void *)0x0) {
        iVar4 = FUN_100b08e0(uVar3,param_1,param_2,param_3,param_4,param_5);
      }
      local_4 = 0xffffffff;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2a4) != 0)) {
        (&DAT_1018e1d8)[uVar3] = 1;
        FUN_100b40c0(uVar3,param_7 != 0);
      }
      ExceptionList = local_c;
      return iVar4;
    }
    bVar2 = (char)uVar3 + 1;
    uVar3 = (uint)bVar2;
  } while (bVar2 != 0xd2);
  return 0;
}


/* END FUNCTION 0x1009ff50 */

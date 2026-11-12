/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f6e0
 * Name: FUN_1004f6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004f6e0(int *param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uStack_13;
  undefined2 uStack_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101158e8;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  uStack_13 = (undefined2)*param_3;
  uStack_11 = (undefined2)((uint)*param_3 >> 0x10);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1004f2d0(CONCAT22(uStack_13,*param_2),CONCAT22(*(undefined2 *)(param_3 + 1),uStack_11),
               *(undefined1 *)((int)param_3 + 6));
  local_4 = 0xffffffff;
  FUN_10020550();
  while ((iVar1 != 0 && (iVar2 = FUN_1004ed20(iVar1), *param_2 < *(ushort *)(iVar2 * 9 + *param_1)))
        ) {
    FUN_1004f200(iVar1,iVar2);
    iVar1 = iVar2;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004f6e0 */

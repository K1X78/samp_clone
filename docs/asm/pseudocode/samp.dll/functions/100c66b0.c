/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c66b0
 * Name: FUN_100c66b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_100c66b0(undefined4 param_1,undefined4 param_2)

{
  void *_Memory;
  int iVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined8 uVar5;
  undefined4 extraout_var;
  
  FUN_100c6630();
  uVar5 = CONCAT44(param_2,DAT_102aca68);
  uVar3 = extraout_var;
  if ((DAT_102aca68 != 0) ||
     (uVar5 = (*(code *)0x53e230)(), uVar3 = extraout_ECX, DAT_102aca68 != 0)) {
    DAT_102aca68 = 0;
  }
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((((DAT_102aca3c != 0) &&
       (iVar1 = FUN_100a0760(0,unaff_ESI,unaff_EBP,&stack0xfffffff4,unaff_EBX,uVar4,uVar3),
       iVar1 == 0)) && (DAT_102aca24 != (void *)0x0)) &&
     (*(int *)(*(int *)((int)DAT_102aca24 + 0x3de) + 0x20) != 0)) {
    FUN_1001e2f0();
  }
  if (DAT_102ac9c0 == 0) {
    if (DAT_102aca3c != 0) {
      FUN_100a0410();
    }
    if (10 < DAT_102aca60) {
      _DAT_102aca64 = 1;
    }
    return CONCAT44(uVar4,(int)uVar5);
  }
  DVar2 = GetTickCount();
  _Memory = DAT_102aca24;
  if (DVar2 - _DAT_102ac9c4 < 0x3e9) {
    return CONCAT44(uVar4,(int)uVar5);
  }
  if (DAT_102aca24 != (void *)0x0) {
    FUN_10009570();
    _free(_Memory);
    DAT_102aca24 = (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}


/* END FUNCTION 0x100c66b0 */

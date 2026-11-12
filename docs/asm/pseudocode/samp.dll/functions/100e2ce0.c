/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2ce0
 * Name: FUN_100e2ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100e2d2f) */
/* WARNING: Removing unreachable block (ram,0x100e2dc0) */

void FUN_100e2ce0(undefined4 *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) {
    *param_1 = 0x2d3a2d2d;
    param_1[1] = 0x2d2d3a2d;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  lVar1 = __alldiv(param_2,param_3,0xe10,0);
  if (lVar1 < 100) {
    uVar2 = __allmul(lVar1,0xe10,0);
    lVar3 = __alldiv(param_2 - (uint)uVar2,
                     (param_3 - (int)((ulonglong)uVar2 >> 0x20)) - (uint)(param_2 < (uint)uVar2),
                     0x3c,0);
    lVar4 = __allmul(lVar1,0x3c,0);
    uVar2 = __allmul(lVar3 + lVar4,0x3c,0);
    FUN_100cc780(param_1,9,"%2I64d:%02I64d:%02I64d",lVar1,lVar3,param_2 - (uint)uVar2,
                 (param_3 - (int)((ulonglong)uVar2 >> 0x20)) - (uint)(param_2 < (uint)uVar2));
    return;
  }
  lVar1 = __alldiv(param_2,param_3,0x15180,0);
  if (999 < lVar1) {
    FUN_100cc780(param_1,9,"%7I64dd",lVar1);
    return;
  }
  uVar2 = __allmul(lVar1,0x15180,0);
  uVar2 = __alldiv(param_2 - (uint)uVar2,
                   (param_3 - (int)((ulonglong)uVar2 >> 0x20)) - (uint)(param_2 < (uint)uVar2),0xe10
                   ,0);
  FUN_100cc780(param_1,9,"%3I64dd %02I64dh",lVar1,uVar2);
  return;
}


/* END FUNCTION 0x100e2ce0 */

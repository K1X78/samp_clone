/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a4e70
 * Name: FUN_100a4e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_100a4e70(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  
  DAT_1018f618 = param_3;
  if ((((DAT_102aca24 != 0) && (param_3 != (int *)0x0)) && (*param_3 == 0x866f60)) &&
     ((param_3[7] & 0x80000000U) != 0)) {
    FUN_10002e40(param_3);
    DAT_1018f578 = FUN_100128d0(param_3);
    if ((DAT_1018f578 != 0) &&
       (((*(int *)(DAT_1018f578 + 0x118b) != 0 || (300.0 < *(float *)(DAT_1018f578 + 0x54))) ||
        (*(char *)(DAT_1018f578 + 0x1199) != '\0')))) {
      return CONCAT44(param_2,in_EAX);
    }
  }
  if (((DAT_1018de44 != 0) && (DAT_1018f618 != (int *)0x0)) &&
     ((*DAT_1018f618 == 0x866f60 && ((DAT_1018f618[7] & 0x80000000U) != 0)))) {
    DAT_1018f578 = FUN_100128d0(DAT_1018f618);
    if ((DAT_1018f578 != 0) &&
       ((*(int *)(DAT_1018f578 + 0x118b) != 0 || (300.0 < *(float *)(DAT_1018f578 + 0x54))))) {
      return CONCAT44(param_2,in_EAX);
    }
  }
  uVar1 = (*(code *)0x5534b9)();
  return uVar1;
}


/* END FUNCTION 0x100a4e70 */

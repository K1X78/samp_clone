/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101072ea
 * Name: __powhlp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __powhlp(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  uVar4 = 0;
  if (dVar1 < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_10156110;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) goto LAB_10107395;
    if (1.0 < dVar1) goto LAB_10107445;
    if (1.0 <= dVar1) goto LAB_10107348;
  }
  else {
    if ((param_3._4_4_ == -0x100000) && (param_3._0_4_ == 0)) {
      if (1.0 < dVar1) {
        dVar2 = 0.0;
        goto LAB_10107445;
      }
      if (dVar1 < 1.0) goto LAB_10107445;
LAB_10107348:
      uVar4 = 1;
      dVar2 = _DAT_10156118;
      goto LAB_10107445;
    }
LAB_10107395:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = __d_inttype(param_3);
      if (param_3 <= 0.0) {
        if (0.0 <= param_3) {
          dVar2 = 1.0;
        }
        else {
          dVar2 = _DAT_10156130;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
        }
      }
      else {
        dVar2 = _DAT_10156110;
        if (iVar3 == 1) {
          dVar2 = -_DAT_10156110;
        }
      }
      goto LAB_10107445;
    }
    if (param_1 != 0) {
      return 0;
    }
    if (0.0 < param_3) goto LAB_10107445;
    if (0.0 <= param_3) {
      dVar2 = 1.0;
      goto LAB_10107445;
    }
  }
  dVar2 = 0.0;
LAB_10107445:
  *param_4 = dVar2;
  return uVar4;
}


/* END FUNCTION 0x101072ea */

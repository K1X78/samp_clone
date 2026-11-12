/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010823a
 * Name: _ldexp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _ldexp(double _X,int _Y)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(_X);
    if (0 < iVar2) {
      if (iVar2 < 3) goto LAB_101082e5;
      if (iVar2 == 3) {
        fVar3 = (float10)__handle_qnan2();
        goto LAB_10108421;
      }
    }
    dVar4 = _X + 1.0;
    uVar5 = 8;
  }
  else {
    if (_X == 0.0) {
LAB_101082e5:
      __ctrlfp(uVar1,0xffff);
      fVar3 = (float10)_X;
      goto LAB_10108421;
    }
    fVar3 = (float10)__decomp(_X,&local_8);
    dVar4 = (double)fVar3;
    local_8 = _Y + local_8;
    if (local_8 < 0xa01) {
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) {
          dVar4 = dVar4 * 0.0;
        }
        else {
          if (-0x3fe < local_8) {
            fVar3 = (float10)__set_exp(dVar4,local_8);
            __ctrlfp(uVar1,0xffff);
            fVar3 = (float10)(double)fVar3;
            goto LAB_10108421;
          }
          fVar3 = (float10)__set_exp(dVar4,local_8 + 0x600);
          dVar4 = (double)fVar3;
        }
        uVar5 = 0x12;
        goto LAB_101083fc;
      }
      fVar3 = (float10)__set_exp(dVar4,local_8 + -0x600);
      dVar4 = (double)fVar3;
    }
    else {
      dVar4 = __copysign(_DAT_10156110,dVar4);
    }
    uVar5 = 0x11;
  }
LAB_101083fc:
  fVar3 = (float10)__except2(uVar5,0x19,_X,(double)_Y,dVar4,uVar1);
LAB_10108421:
  return (double)fVar3;
}


/* END FUNCTION 0x1010823a */

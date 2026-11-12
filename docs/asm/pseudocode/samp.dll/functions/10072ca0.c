/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072ca0
 * Name: thunk_FUN_100726d0
 * Status: ok
 * Single JMP forwarder to 0x100726d0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall thunk_FUN_100726d0(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined8 uVar8;
  float unaff_retaddr;
  float *pfStack_80;
  undefined4 **ppuStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined1 *puStack_70;
  float *pfStack_6c;
  float *pfStack_68;
  int *piStack_64;
  int *piStack_60;
  float fStack_5c;
  float fStack_48;
  float afStack_44 [2];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  float fStack_34;
  undefined4 auStack_30 [4];
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 *puStack_4;
  
  if (*(int *)((int)param_1 + 0x107) != 0) {
    if (*(int **)((int)param_1 + 0x10f) != (int *)0x0) {
      iVar3 = **(int **)((int)param_1 + 0x10f);
      fStack_5c = -1.7014118e+38;
      piStack_60 = (int *)0x505;
      piStack_64 = &iStack_20;
      pfStack_68 = (float *)0xffffffff;
      pfStack_6c = (float *)0x10072709;
      uVar8 = FUN_10071a30();
      piStack_74 = (int *)((ulonglong)uVar8 >> 0x20);
      pfStack_6c = (float *)uVar8;
      puStack_70 = (undefined1 *)0x0;
      piStack_78 = (int *)0x10072710;
      (**(code **)(iVar3 + 0x38))();
    }
    piStack_60 = *(int **)((int)param_1 + 0x107);
    fStack_5c = 1.4013e-45;
    *param_1 = iStack_18 - iStack_20;
    param_1[1] = iStack_14 - (int)fStack_1c;
    piStack_64 = (int *)0x10072737;
    (**(code **)(*piStack_60 + 0x34))();
    puVar2 = puStack_4;
    piStack_64 = (int *)&stack0xffffffb0;
    pfStack_6c = afStack_44;
    pfStack_68 = (float *)puStack_4;
    fStack_48 = 0.0;
    puStack_70 = (undefined1 *)0x10072763;
    FUN_100b4850();
    piStack_64 = (int *)auStack_38;
    pfStack_68 = afStack_44;
    pfStack_6c = (float *)0x10072777;
    fVar7 = (float10)FUN_100716c0();
    if (fVar7 <= (float10)1.0) {
      piStack_64 = (int *)&stack0xffffffb0;
      fVar1 = -unaff_retaddr;
      pfStack_6c = afStack_44;
      pfStack_68 = (float *)puStack_4;
      puStack_70 = (undefined1 *)0x100727a6;
      puStack_4 = (undefined4 *)fVar1;
      FUN_100b4850();
      piStack_64 = auStack_30;
      pfStack_68 = afStack_44;
      pfStack_6c = (float *)0x100727ba;
      fVar7 = (float10)FUN_100716c0();
      if (fVar7 <= (float10)1.0) {
        piStack_64 = *(int **)((int)param_1 + 0x107);
        pfStack_68 = (float *)0x100727d7;
        (**(code **)(*piStack_64 + 0x10))();
        piStack_74 = *(int **)((int)param_1 + 0x107);
        pfStack_68 = (float *)0xff9999cc;
        pfStack_6c = (float *)0x2;
        puStack_70 = auStack_3c;
        piStack_78 = (int *)0x100727ef;
        (**(code **)(*piStack_74 + 0x14))();
        piStack_78 = *(int **)((int)param_1 + 0x107);
        ppuStack_7c = (undefined4 **)0x100727fb;
        (**(code **)(*piStack_78 + 0x44))();
        if (*(char *)((int)param_1 + 0xa3) == '\0') {
          if (ABS(fVar1 - fStack_48) <= ABS(0.0 - afStack_44[0])) {
            if (afStack_44[0] <= 0.0) {
              *(undefined1 *)(param_1 + 0x29) = 0;
            }
            else {
              *(undefined1 *)(param_1 + 0x29) = 1;
            }
            *(undefined4 *)((int)param_1 + 0xb7) = 1;
          }
          else if (fStack_48 <= fVar1) {
            *(undefined1 *)(param_1 + 0x29) = 0;
            *(undefined4 *)((int)param_1 + 0xb7) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x29) = 1;
            *(undefined4 *)((int)param_1 + 0xb7) = 0;
          }
        }
        ppuStack_7c = (undefined4 **)0x1007288d;
        iVar3 = FUN_100f9324();
        ppuStack_7c = (undefined4 **)0x10072898;
        iVar4 = FUN_100f9324();
        pfStack_80 = (float *)(iVar3 + 1);
        ppuStack_7c = (undefined4 **)(iVar4 + 1);
        FUN_10071fe0(0,iVar3,iVar4);
        ppuStack_7c = &pfStack_68;
        pfStack_80 = (float *)puVar2;
        pfStack_68 = (float *)0x0;
        piStack_64 = (int *)iStack_18;
        piStack_60 = (int *)0x0;
        FUN_100b4850(&fStack_5c);
        ppuStack_7c = (undefined4 **)&stack0xffffffb0;
        pfStack_80 = &fStack_5c;
        fVar7 = (float10)FUN_100716c0();
        if (fVar7 <= (float10)1.0) {
          ppuStack_7c = &pfStack_68;
          pfStack_80 = (float *)puVar2;
          piStack_64 = (int *)fStack_1c;
          FUN_100b4850(&fStack_5c);
          ppuStack_7c = (undefined4 **)&fStack_48;
          pfStack_80 = &fStack_5c;
          fVar7 = (float10)FUN_100716c0();
          if (fVar7 <= (float10)1.0) {
            ppuStack_7c = *(undefined4 ***)((int)param_1 + 0x107);
            pfStack_80 = (float *)0x1007294e;
            (**(code **)((int)*ppuStack_7c + 0x10))();
            pfStack_80 = (float *)0xffcc9999;
            (**(code **)(**(int **)((int)param_1 + 0x107) + 0x14))
                      (*(int **)((int)param_1 + 0x107),&stack0xffffffac,2);
            (**(code **)(**(int **)((int)param_1 + 0x107) + 0x44))(*(int **)((int)param_1 + 0x107));
            if (*(char *)((int)param_1 + 0xa3) == '\0') {
              if (ABS((float)pfStack_68 - (float)piStack_60) <= ABS((float)piStack_64 - fStack_5c))
              {
                if (fStack_5c <= (float)piStack_64) {
                  *(undefined1 *)((int)param_1 + 0xa5) = 0;
                }
                else {
                  *(undefined1 *)((int)param_1 + 0xa5) = 1;
                }
                *(undefined4 *)((int)param_1 + 0xbb) = 1;
              }
              else if ((float)piStack_60 <= (float)pfStack_68) {
                *(undefined1 *)((int)param_1 + 0xa5) = 0;
                *(undefined4 *)((int)param_1 + 0xbb) = 0;
              }
              else {
                *(undefined1 *)((int)param_1 + 0xa5) = 1;
                *(undefined4 *)((int)param_1 + 0xbb) = 0;
              }
            }
            iVar3 = FUN_100f9324();
            iVar4 = FUN_100f9324();
            FUN_10071fe0(1,iVar3,iVar4,iVar3 + 1,iVar4 + 1);
            pfStack_80 = (float *)0x0;
            ppuStack_7c = (undefined4 **)0x0;
            piStack_78 = (int *)auStack_30[0];
            FUN_100b4850(&piStack_74,puVar2,&pfStack_80);
            fVar7 = (float10)FUN_100716c0(&piStack_74,&pfStack_68);
            if (fVar7 <= (float10)1.0) {
              piStack_78 = (int *)fStack_34;
              FUN_100b4850(&piStack_74,puVar2,&pfStack_80);
              fVar7 = (float10)FUN_100716c0(&piStack_74,&piStack_60);
              if (fVar7 <= (float10)1.0) {
                (**(code **)(**(int **)((int)param_1 + 0x107) + 0x10))
                          (*(int **)((int)param_1 + 0x107));
                (**(code **)(**(int **)((int)param_1 + 0x107) + 0x14))
                          (*(int **)((int)param_1 + 0x107),&pfStack_6c,2,0xff99cc99);
                (**(code **)(**(int **)((int)param_1 + 0x107) + 0x44))
                          (*(int **)((int)param_1 + 0x107));
                if (*(char *)((int)param_1 + 0xa3) == '\0') {
                  if (ABS((float)pfStack_80 - (float)piStack_78) <=
                      ABS((float)ppuStack_7c - (float)piStack_74)) {
                    if ((float)piStack_74 <= (float)ppuStack_7c) {
                      *(undefined1 *)((int)param_1 + 0xa6) = 0;
                    }
                    else {
                      *(undefined1 *)((int)param_1 + 0xa6) = 1;
                    }
                    *(undefined4 *)((int)param_1 + 0xbf) = 1;
                  }
                  else if ((float)piStack_78 <= (float)pfStack_80) {
                    *(undefined1 *)((int)param_1 + 0xa6) = 0;
                    *(undefined4 *)((int)param_1 + 0xbf) = 0;
                  }
                  else {
                    *(undefined1 *)((int)param_1 + 0xa6) = 1;
                    *(undefined4 *)((int)param_1 + 0xbf) = 0;
                  }
                }
                iVar3 = FUN_100f9324();
                iVar4 = FUN_100f9324();
                FUN_10071fe0(2,iVar3,iVar4,iVar3 + 1,iVar4 + 1);
                iVar5 = FUN_100f9324();
                iVar6 = FUN_100f9324();
                iVar3 = iVar5 + 1;
                iVar4 = iVar6 + 1;
                FUN_10071fe0(10,iVar5,iVar6,iVar3,iVar4);
                if (*(char *)((int)param_1 + 0xa2) == '\0') {
                  FUN_10071b20(param_1 + 0x16);
                }
                else {
                  iVar5 = iVar5 + (-2 - *param_1);
                  iVar3 = iVar3 + (-2 - *param_1);
                  FUN_10071fe0(5,iVar5,iVar6,iVar3,iVar4);
                }
                iVar5 = iVar5 + (-2 - *param_1);
                iVar3 = iVar3 + (-2 - *param_1);
                FUN_10071fe0(4,iVar5,iVar6,iVar3,iVar4);
                FUN_10071fe0(3,iVar5 + (-2 - *param_1),iVar6,iVar3 + (-2 - *param_1),iVar4);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x10072ca0 */
